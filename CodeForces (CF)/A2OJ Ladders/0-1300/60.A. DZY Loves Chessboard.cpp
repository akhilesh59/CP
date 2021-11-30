#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin>>n>>m;
    vector<string> v(n);

    for(auto& i : v) cin>>i;

    for(int i=0; i<n; i++) {
        int lu;
        if(i%2==0)  lu = 0;
        else lu = 1;
        for(int j=0; j<m; j++) {
            if(v[i][j] == '.') {
                if(lu == 0) {
                    v[i][j] = 'B';
                    lu++;
                }
                else if(lu == 1) {
                    v[i][j] = 'W';
                    lu--;
                }
            }
            else {
                if(lu == 1) lu = 0;
                else lu = 1;
            }
        }
    }

    for(auto i : v) cout<<i<<"\n";

    return 0;
}