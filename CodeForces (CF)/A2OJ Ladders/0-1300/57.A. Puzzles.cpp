#include<bits/stdc++.h>
using namespace std;

int main() {
    int m,n,diff=INT_MAX; cin >> n >> m;
    vector<int> v(m);

    for(auto& i : v) cin >> i;

    sort(v.begin(), v.end());

    for(int i=0; i<=m-n; i++) {
        for(int j=m-1; j>=0; j--) {
            if((j-i+1) == n) diff = min(diff, abs(v[j] - v[i]));
        }
    }

    cout<<diff<<"\n";

    return 0;
}