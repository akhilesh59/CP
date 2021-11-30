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
#define sort_asc sort(vp.begin(), vp.end())
#define sort_dec sort(v.begin(), v.end(), greater<int> ())

void sol() {
    ll n,cnt = 0;
    cin>>n;

    vl v(n);
    vector<pair<long,long>> vp;

    Fln {
        cin >> v[i];
    }

    Fln {
        vp.pb({v[i],i+1});
    }

    sort_asc;

    // for(auto& i : vp) {
    //     cout<<i.first<<"->"<<i.second<<"\n";
    // }

    for(ll i=0; i<n and vp[i].first * vp[i].first <= 2*n; i++) {
        for(ll j=i+1; j<n and vp[i].first * vp[j].first <= 2*n; j++) {
            if(vp[i].first * vp[j].first == vp[i].second + vp[j].second) cnt++;
        }
    }

    cout<<cnt<<"\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    ll t;
    cin>>t;

    while(t--) {
        sol();
    }

    return 0;
}

