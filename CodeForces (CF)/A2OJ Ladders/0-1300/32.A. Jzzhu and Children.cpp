#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin >> n >> m;
    vector<int> v(n);

    for(auto& i : v) cin >> i;

    int maxi = INT_MIN;
    int max_idx = -1;

    int chk = 1;

    while(chk) {
        chk = 0;
        for(int i = 0; i<n; i++) {
            if(v[i] - m <= 0 and v[i] > 0) {
                max_idx = i+1;
                v[i] = 0;
            }
            else if(v[i] > 0) {
                v[i] -= m;
                chk = 1;
            }
            else continue;
        }
    }

    cout<<max_idx<<"\n";


    return 0;
}