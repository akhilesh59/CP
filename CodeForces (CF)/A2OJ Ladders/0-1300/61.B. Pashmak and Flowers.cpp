#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    vector<long long> v(n);
    for(auto& i : v) cin>>i;

    sort(v.begin(),v.end());
    long long maxc=0,minc=0;
    long long maxi = v[n-1] - v[0];
    
    for(auto i : v) {
        if(i == v[0]) minc++;
        else if(i == v[n-1]) maxc++;
    }
    
    long long cnt = 0;
    if(minc == n || maxc == n) {
        cnt = n*(n-1)/2;
    }
    else cnt = minc*maxc;

    cout<<maxi<<" "<<cnt<<"\n";

    return 0;
}