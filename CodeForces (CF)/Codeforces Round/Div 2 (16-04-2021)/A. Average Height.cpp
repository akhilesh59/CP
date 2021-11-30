#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define vl vector<ll>

int main() {
    ll t,n;
    cin>>t;

    while(t--) {
        ll x;
        cin>>n;
        vl v;

        for(ll i = 0; i<n; i++) {
            cin>>x;
            if(x%2 == 0) cout<<x<<" ";
            else v.pb(x);
        }

        for(auto i : v) cout<<i<<" ";
        
        cout<<"\n";
    }


    return 0;
}