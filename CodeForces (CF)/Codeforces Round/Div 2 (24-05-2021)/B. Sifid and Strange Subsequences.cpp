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
    ll n,cnt=0,maxi = INT_MIN;
    cin>>n;

    vl v(n);

    Fln {
        cin>>v[i];
        maxi = max(maxi,v[i]);
    }

    sort_dec;

    ll i = 0;

    for(ll j=i+1; j<n && i<n-1; j++) {
        ll diff = maxi-v[j];
        if(abs(diff) < maxi) cnt++;
    }

    cout<<n-cnt<<"\n";

}

int main() {
    ll t;
    cin>>t;

    while(t--) {
        sol();
    }

    return 0;
}

