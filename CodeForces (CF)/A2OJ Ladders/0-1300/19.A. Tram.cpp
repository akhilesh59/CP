#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int arr[n][2];
    int ans = INT_MIN;
    int rem = 0;

    for(int i=0; i<n; i++) {
        cin>>arr[i][0];
        cin>>arr[i][1];

        rem = rem - arr[i][0] + arr[i][1];

        ans = max(rem, ans);
    }

    cout<<ans<<"\n";

    return 0;
}