#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n,l; cin >> n >> l;
    vl v(n);
    for(auto &i : v) cin >> i;

    sort(v.begin(), v.end());

    ll maxi = INT_MIN;

    for(ll i=0; i<n-1; i++) {
        maxi = max(maxi, v[i+1]-v[i]);
    }

    double ans = max((double)maxi/2.0, (double)(v[1]-v[0]),(double)(v[n-1]-v[n-2]) );

    cout<<ans<<'\n';

    return 0;
}