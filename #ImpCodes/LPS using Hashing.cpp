// Double Hashing with Prime Power and Inverse Prime Power Array //

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll binPow(ll a, ll b, ll m) {
    a %= m; 
    ll res = 1; 
    while (b > 0) {
        if (b & 1) res = res * a % m; 
        a = a * a % m; 
        b >>= 1;
    } 
    return res;
}

int main() {
    string s; cin >> s;
    ll n = s.size();

    ll mod1 = 1e9+7, mod2 = 1e9+9;
    vector<ll> prPow1(n+1, 1), inv_prPow1(n+1, 1);
    vector<ll> prPow2(n+1, 1), inv_prPow2(n+1, 1);

    for(ll i=1; i<=n; ++i) {
        prPow1[i] = (prPow1[i-1]*31)%mod1;
        prPow2[i] = (prPow2[i-1]*37)%mod2;
    }

    inv_prPow1[n] = binPow(prPow1[n], mod1-2, mod1);
    inv_prPow2[n] = binPow(prPow2[n], mod2-2, mod2);

    for(ll i=n-1; i>=0; --i) {
        inv_prPow1[i] = (inv_prPow1[i+1]*31)%mod1;
        inv_prPow2[i] = (inv_prPow2[i+1]*37)%mod2;
    }

    vector<ll> hash1(n+1), hash2(n+1);
    hash1[0] = hash2[0] = s[0]-'a'+1;

    for(ll i=1; i<n; ++i) {
        hash1[i] = (hash1[i-1] + (s[i]-'a'+1)*prPow1[i])%mod1;
        hash2[i] = (hash2[i-1] + (s[i]-'a'+1)*prPow2[i])%mod2;
    }

    for(ll i=1; i<n; ++i) {
        ll prefHash1 = hash1[i-1], prefHash2 = hash2[i-1];

        ll suffHash1 = ((hash1[n-1] - hash1[n-i-1] + mod1)%mod1 * inv_prPow1[n-i])%mod1;
        ll suffHash2 = ((hash2[n-1] - hash2[n-i-1] + mod2)%mod2 * inv_prPow2[n-i])%mod2;

        if(prefHash1 == suffHash1 && prefHash2 == suffHash2) cout<<i<<' ';        
    }
    
    return 0;
}