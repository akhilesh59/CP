#include<bits/stdc++.h>

using namespace std;

#define ll long long


int main() {
    ll t;
    cin >> t;

    while(t--) {
        ll n,r,ans = 0,maxi = INT_MIN;
        cin >> n >> r;

        ll a[n+1];
        ll b[n+1];

        for(ll i=0; i<n; i++) {
            cin>>a[i];
        }

        for(ll j=0; j<n; j++) {
                cin>>b[j];
        }

        ans = b[0];
        maxi = max(ans,maxi);

        ll count = 0;
        ll diff = 0;

        if(n>1) {
                for(ll i=1; i<n; i++) {
                count = a[i] - a[i-1];

                if(count < 0) count = count * (-1);

                diff = count * r;

                ans = ans + b[i] - diff;

                if(ans < 0) ans = 0;

                maxi = max(ans,maxi);

            }
        }

        cout<< maxi <<"\n";
    }
    
    return 0;
}