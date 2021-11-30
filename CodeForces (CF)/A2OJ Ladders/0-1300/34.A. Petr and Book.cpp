#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);

    for(auto& i : v) cin >> i;

    while(n>0) {
        for(int i=0; i < n; i++) {
            n -= v[i];
            if(n<=0) {
                cout<<i+1<<"\n";
                return 0;

            }
        }
    }

    return 0;
}