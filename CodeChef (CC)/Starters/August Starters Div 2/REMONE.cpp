#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define umpll unordered_map<ll,ll>
#define umpsl unordered_map<string,ll>
#define mkpr make_pair
#define Fien for(int i=0; i<=n; i++)
#define Fln for(ll i=0; i<n; i++)
#define pb push_back
#define complete v.begin(),v.end()
#define itr_v for(auto it = v.begin(); it != v.end; it++)
#define sort_asc sort(v.begin(), v.end())
#define sort_dec sort(v.begin(), v.end(), greater<int> ())

void sol() {
    ll n,ans = INT_MIN, mf=0;
    cin>>n;
    
    vl a(n); 
    for(auto &i : a) cin >> i;
    sort(a.begin(), a.end());
    
    vl b(n-1); 
    for(auto &i : b) cin >> i;
    sort(b.begin(), b.end());

    unordered_map<ll,pair<ll,ll>> mp;
    umpll fq;
    
    if(n-1 == 1) {
        ans = abs(b[0] - max(a[0],a[1]));
        cout<<ans<<"\n";
        return;
    }
    
    
    for(ll i=0; i<n-1; i++) {
        ll diff = abs(a[i] - a[i+1]);
        fq[diff]++;
        mp[diff] = mkpr(a[i],a[i+1]);
    }
    
    for(ll i=0; i<n-2; i++) {
        ll diff = abs(b[i] - b[i+1]);
        if(mp.find(diff) != mp.end()) {
            ll t1 = min(mp[diff].first, mp[diff].second) - min(b[i],b[i+1]);
            t1 = abs(t1);
            fq[t1]++;
            if(mf < fq[t1]) {
                mf = fq[t1];
                ans = t1;
            }
        }
        
    }
    
    cout<<ans<<"\n";
    

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;

    while(t--) {
        sol();
    }

    return 0;
}

