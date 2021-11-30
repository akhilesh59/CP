#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin >> n;
    vector<int> a(n);
    for(auto& i : a) cin >> i;

    cin >> m;

    vector<int> b(m);
    for(auto& i : b) cin >> i;

    unordered_map<int,int> ump;

    for(int i=0; i<n; i++) {
        int maxi = 0;
        for(int j=0; j<m; j++) {
            if(b[j] % a[i] == 0) {
                maxi = max(maxi,b[j]/a[i]);
            }
        }
        ump[a[i]] = maxi;
    }

    int maxi = 0, cnt = 0;

    for(auto i : ump) {
        if(i.second > maxi) {
            maxi = i.second;
            cnt = 0;
        }
        else if(i.second == maxi) cnt++;
    }

    cout<<cnt<<"\n";

    return 0;
}