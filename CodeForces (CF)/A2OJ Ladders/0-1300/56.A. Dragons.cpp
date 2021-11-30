#include<bits/stdc++.h>
using namespace std;

int main() {
    int s,n; cin >> s >> n;
    vector<pair<int,int>> v;

    for(int i=0; i<n; i++) {
        int x,y; cin >> x >> y;
        v.push_back({x,y});
    }

    sort(v.begin(), v.end());

    for(auto i : v) {
        if(s > i.first) {
            s += i.second;
        }
        else {
            cout<<"NO"<<"\n";
            return 0;
        }
    }

    cout<<"YES"<<"\n";

    return 0;
}