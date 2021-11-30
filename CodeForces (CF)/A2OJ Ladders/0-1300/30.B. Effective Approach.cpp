#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    vector<long long> v(n+1);
    unordered_map<long long,long long> ump;

    for(long long i=1; i<=n; i++) {
        cin>>v[i];
        ump[v[i]] = i;
    }

    long long m; cin >> m;

    long long va=0,p=0;

    while(m--) {
        long long q; cin >> q;
        long long f = ump[q];
        va += f;
        p += n-f+1;
    }

    cout<<va<<" "<<p<<"\n";


    return 0;
}