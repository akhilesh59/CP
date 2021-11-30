#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> v(n);

    for(auto& i : v) cin>>i;

    int mini = v[0];
    int maxi = v[0];
    int ans = 0;

    for(auto i : v) {
        if(i < mini) {
            ans++;
            mini = i;
        }
        else if(i > maxi) {
            ans++;
            maxi = i;
        }
    }

    cout<<ans<<"\n";

    return 0;
}