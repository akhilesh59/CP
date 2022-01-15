#include<bits/stdc++.h>     //Accepted
using namespace std;
    
#define ll long long
    
int main() {
    ll t; cin >> t;
    
    while(t--) {
        vector<ll> v(7);
        for(auto &i : v) cin >> i;
        
        ll a = v[0];
        ll b = v[1];
        ll c = v[5]-v[1];
    
        cout<<a<<' '<<b<<' '<<c<<'\n';
    }
    
    return 0;
}