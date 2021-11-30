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
#define sort_dec sort(v.begin(), v.end(), greater<ll> ())

void sol() {
    ll n,k;
    cin>>n>>k;
    ll tmp = k;
    vl v(n);

    Fln cin>>v[i];

    sort_dec;

    ll ans = 0;
    ll ans2 = 0;

    ll i = 0;

    for(i; i<n; i += 2) {
        ans += v[i];
        k--;
        if(k==0) break;
    }

    k = tmp;

    ll j=1;

    for(j; j<n; j += 2) {
        ans2 += v[j];
        k--;
        if(k==0) break;
    }

    if(n-j+1 > 0) ans2 += v[j+1];

    ans = max(ans,ans2);

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

