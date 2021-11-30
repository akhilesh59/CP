#include<bits/stdc++.h>     // Accepted
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
    ll n;
    cin>>n;
    vector<vector<int>> v(n,vector<int>(3));

    for(int i=0; i<n; i++) for(int j=0; j<3; j++) cin>>v[i][j];

    int xr=0,yr=0,zr=0;

    for(int j=0; j<3; j++) {
        for(int i=0; i<n; i++) {
            if(j==0) xr += v[i][j];
            if(j==1) yr += v[i][j];
            if(j==2) zr += v[i][j];
        }
    }


    if(xr == 0 and yr == 0 and zr == 0) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // ll t;
    // cin>>t;

    // while(t--) {
    //     sol();
    // }

    sol();

    return 0;
}

