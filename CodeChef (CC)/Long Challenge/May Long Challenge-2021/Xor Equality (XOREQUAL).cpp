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

ll power(ll a, ll b, ll m) {
    ll result = 1;
    while(b) {
        if(b%2) result = (result * a) % m;
        a = (a*a)%m;
        b /= 2;

    }
    return result;
}

void sol() {
    ll modu = 1e9+7;
    ll n;
    cin>>n;

    ll ans = power(2,n-1,modu);

    cout<<ans<<"\n";

}

int main() {
    ll t;
    cin>>t;

    while(t--) {
        sol();
    }

    return 0;
}

