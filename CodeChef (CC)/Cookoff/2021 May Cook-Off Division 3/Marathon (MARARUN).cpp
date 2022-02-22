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
    ll D,d,a,b,c;
    cin>>D>>d>>a>>b>>c;

    int res =  D*d;
    
    if(res>=42) {
        cout<<c<<"\n";
    }
    else if(res>=21) {
        cout<<b<<"\n";
    }
    else if(res>=10) {
        cout<<a<<"\n";
    }
    else cout<<"0\n";

} 

int main() {
    ll t;
    cin>>t;

    while(t--) {
        sol();
    }

    return 0;
}

