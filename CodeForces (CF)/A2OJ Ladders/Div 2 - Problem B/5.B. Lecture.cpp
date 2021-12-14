#include<bits/stdc++.h>     // Accepted
using namespace std;

int main() {
    int n,m; cin >> n >> m;
    unordered_map<string,string> mp;

    for(int i=0; i<m; i++) {
        string x,y; cin >> x >> y;
        mp[x] = y;
    }

    vector<string> v(n);
    for(auto &i : v) cin >> i;

    string ans = "";

    for(int i=0; i<n; i++) {
        string tmp;
        if(v[i].length() <= mp[v[i]].length()) tmp = v[i];
        else tmp = mp[v[i]];

        ans += tmp;
        ans += " ";
    }

    cout<<ans<<'\n';

    return 0;
}