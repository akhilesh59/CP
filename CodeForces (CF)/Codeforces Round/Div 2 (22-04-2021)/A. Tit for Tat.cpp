#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main(){
    ll t;
    cin >> t;

    while(t--) {
        ll n,k;
        cin >> n >> k;
        vector<ll> v;

        for(ll i=0; i<n; i++) {
            ll x;
            cin >> x;
            v.pb(x);
        }

        ll s = 0, e = n-1;

        while(k--) {
            if(v[s] > 0 && s < e) {
                if(v[e] == 100) e--;

                v[s]--;
                v[e]++;

            }

            else if(s < e) {
                s++;
                k++;
            }   

        }

        for(auto i : v) cout << i << " ";

        cout << endl;

    }


    return 0;
}