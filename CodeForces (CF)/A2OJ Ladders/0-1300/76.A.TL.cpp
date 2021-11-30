#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin >> n >> m;
    vector<int> vn(n); for(auto& i : vn) cin>>i;
    vector<int> vm(m); for(auto& i : vm) cin>>i;

    int nmax,nmin,mmin;
    mmin = *min_element(vm.begin(), vm.end());
    nmin = *min_element(vn.begin(), vn.end());
    nmax = *max_element(vn.begin(), vn.end());

    while(nmax<2*nmin) {
        nmax++;
    }

    if(nmax < mmin) cout<<nmax<<"\n";
    else cout<<-1<<"\n";

    return 0;
}