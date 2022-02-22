#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ll t;
    cin>>t;

    while(t--) {
        ll n,x,rem,ans,diff;
        cin>>n>>x;

        set<ll> st;

        for(ll i=0; i<n; i++) {
            ll tmp;
            cin>>tmp;
            st.insert(tmp);
        }

        rem = n-x;

        diff = st.size();

        ans = min(rem,diff);

        cout<<ans<<"\n";
    }
    


    return 0;
}