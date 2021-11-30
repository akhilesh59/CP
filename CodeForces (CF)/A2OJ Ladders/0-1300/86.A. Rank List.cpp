#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>& a, pair<int,int>& b) {
    if(a.first == b.first) return a.second < b.second;
    return a.first > b.first;
}

int main() {
    int n,k,streak=0,r; cin>>n>>k;
    vector<pair<int,int>> vp;
    map<pair<int,int>,int> mp;

    for(int i=0; i<n; i++) {
        int x,y; cin >> x >> y;
        mp[{x,y}]++;
        vp.push_back({x,y});
    }

    sort(vp.begin(), vp.end(), cmp);

    cout<<mp[vp[k-1]]<<"\n";
    
    return 0;
}