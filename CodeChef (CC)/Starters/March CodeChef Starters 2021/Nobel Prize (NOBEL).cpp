#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

/*



*/

int main() {
    ll t;
    cin>>t;

    while(t--) {

        ll N,M,temp;
        int check = 0;
        cin>>N>>M;

        set<ll, greater<ll>> s;
        // ll arr[N+2] = {0};

        temp = N;

        // vector<ll> v;

        while(temp--) {
            ll x;
            cin>>x;
            s.insert(x);
            // arr[x] += 1;
            // v.pb(x);
        }

        // for(int i=1; i<M; i++) {
            
        //     if(arr[i] == 0) {
        //         cout<<"Yes"<<"\n";
        //         check = 1;
        //         break;
        //     }
        // }

        if(s.size() < M) cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";
        // if(check == 0) cout<<"No"<<"\n";
    }


    return 0;
}
