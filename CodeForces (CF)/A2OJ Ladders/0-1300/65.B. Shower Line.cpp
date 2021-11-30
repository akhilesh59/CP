#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    vector<vector<ll>> v(5,vector<ll>(5));
    for(int i=0; i<5; i++) for(int j=0; j<5; j++) cin >> v[i][j];

    ll ans = 0;
    int arr[] = {1,2,3,4,5};

    do {
        ll i1 = arr[0]-1;
        ll i2 = arr[1]-1;
        ll i3 = arr[2]-1;
        ll i4 = arr[3]-1;
        ll i5 = arr[4]-1;
        
        ll x = ((v[i1][i2] + v[i2][i1] + v[i2][i3] + v[i3][i2]) + 2*(v[i3][i4] + v[i4][i3] + v[i4][i5] + v[i5][i4]));
        ans = max(ans,x);
    } while(next_permutation(arr,arr+5));

    cout<<ans<<"\n";
    

    return 0;
}