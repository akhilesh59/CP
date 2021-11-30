#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,sum=0;
    cin>>n;

    vector<int> v(n);

    for(auto &i : v) cin>>i;

    for(int i=0; i<n; i++) {
        sum += v[i];
    }

    double ans = (double)sum / (double)n;

    cout<<ans<<"\n";  

    return 0;
}