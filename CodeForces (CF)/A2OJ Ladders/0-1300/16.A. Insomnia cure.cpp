#include<bits/stdc++.h>
using namespace std;

int main() {
    int k,l,m,n,d,cnt=0;
    cin>>k>>l>>m>>n>>d;

    vector<int> v(d+1,1);

    for(int i=k; i<=d; i += k) {
        if(i%k == 0) v[i] = 0;
    }

    for(int i=l; i<=d; i += l) {
        if(v[i]) if(i%l == 0) v[i] = 0;
    }

    for(int i=m; i<=d; i += m) {
        if(v[i]) if(i%m == 0) v[i] = 0;
    }

    for(int i=n; i<=d; i += n) {
        if(v[i]) if(i%n == 0) v[i] = 0;
    }

    for(auto i : v) if(i == 0) cnt++;

    cout<<cnt<<"\n";  

    return 0;
}