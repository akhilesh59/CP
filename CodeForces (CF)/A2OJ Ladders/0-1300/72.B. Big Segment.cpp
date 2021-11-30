#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second

int main() {
    long long n, cnt = 0;
    cin >> n;
    
    vector<pair<ll,ll>> vp;
    for(int i=0; i<n; i++) {
        ll l,r; cin >> l >> r;
        vp.push_back({l,r});
    }

    ll mini_l=INT_MAX,maxi_r = INT_MIN;

    ll idx = 1;

    for(auto& i : vp) {
        mini_l = min(mini_l,i.first);
        maxi_r = max(maxi_r,i.second);
    }

    for(auto& i : vp) {
       if(i.F == mini_l && i.S == maxi_r) {
           cout<<idx<<"\n";
           return 0;
       }
       idx++;
    }

    cout<<-1<<"\n";

    return 0;
}