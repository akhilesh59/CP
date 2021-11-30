#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main(){
    ll t;
    cin >> t;

    while(t--) {
        ll n,k,xr=0,flag = 1;
        cin >> n;
        vector<ll> v;

        for(ll i=0; i<n; i++) {
            ll x;
            cin >> x;
            xr = xr ^ x;
            v.pb(x);
        }

        for(auto x : v) {
            if(xr ^ x == 0) flag = 0;
        }

       if(flag) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;

    }


    return 0;
}