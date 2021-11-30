#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define umpll unordered_map<ll,ll>
#define umpsl unordered_map<string,ll>
#define mkpr make_pair
#define Fien for(int i=0; i<=n; i++)
#define Fln for(ll i=0; i<k; i++)
#define pb push_back
#define complete v.begin(),v.end()
#define itr_v for(auto it = v.begin(); it != v.end; it++)
#define sort_asc sort(v.begin(), v.end())
#define sort_dec sort(v.begin(), v.end(), greater<int> ())

void sol() {
    ll n,m,k;
    cin>>n>>m>>k;
    vl v(k);
    vl f(n+1,0);
    vl ans;
    ll cnt = 0;
    bool chk = true;

    Fln {
        cin >> v[i];
        if(v[i] <= n) f[v[i]]++;
    } 

    for(ll i=0; i<=n; i++) {
        if(f[i] > 1) {
            cnt++;
            chk = false;
            ans.pb(i);
        }
    }

    cout<<cnt<<" ";

    for(auto i : ans) cout<<i<<" ";

    cout<<"\n";



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
