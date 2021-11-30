#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

int main() {
    ll t;   
    cin >> t;

    while (t--) {
        ll N,K,D,q_sum = 0,ans;
        cin>>N>>K>>D;

        for(ll i = 0; i < N; i++) {
            ll temp;
            cin>>temp;
            q_sum += temp;
        }

        ans = min((q_sum/K),D);
        cout<<ans<<endl;
    }
   
    

    return 0;
}