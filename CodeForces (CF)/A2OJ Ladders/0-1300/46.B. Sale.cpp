#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin >> n >> m;
    vector<int> v(n);
    for(auto& i : v) cin >> i;

    sort(v.begin(),v.end());

    int sum = 0;

    for(int i=0; i<m; i++) {
        if(v[i] < 0) sum += abs(v[i]);
    }

    cout<<sum<<"\n";

    return 0;
}