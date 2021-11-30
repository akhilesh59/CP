#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);
    for(auto& i : v) cin >> i;

    int mini = INT_MAX;
    int x,y;

    for(int i = 0; i<n; i++) {
        int idx = (i+1)%n;
        int tmp = min(mini,abs(v[i]-v[idx]));
        if(tmp < mini) {
            mini = tmp;
            x = i;
            y = idx;
        }
    }

    cout<<x+1<<" "<<y+1<<"\n";

    return 0;
}