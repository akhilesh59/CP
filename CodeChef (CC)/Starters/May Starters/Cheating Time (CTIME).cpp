#include<bits/stdc++.h>                     // ------------     EDITORIAL   -----------------
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define tdvl vector<vector<ll>>
#define umpll unordered_map<ll,ll>
#define umpsl unordered_map<string,ll>
#define mkpr make_pair
#define Fien for(int i=0; i<=n; i++)
#define Fln for(ll i=0; i<n; i++)
#define pb push_back
#define complete v.begin(),v.end()
#define itr_v for(auto it = v.begin(); it != v.end; it++)
#define sort_asc sort(vp.begin(), vp.end())
#define sort_dec sort(v.begin(), v.end(), greater<int> ())

void sol() {
    ll n,k,f;
    cin>>n>>k>>f;
    vector<pair<ll,ll>> vp(n);

    Fln {
        cin>>vp[i].first>>vp[i].second;
    }

    sort_asc;
    ll time = 0;
    ll max_end = vp[0].second;
    ll z = 0;

    Fln {
        time += max(z,vp[i].first - max_end);
        max_end = max(max_end, vp[i].second);
    }
    time += vp[0].first;
    time += f-max_end;

    if(time>=k) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";

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

