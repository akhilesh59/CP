#include<bits/stdc++.h>     // Accepted
using namespace std;

#define ll long long

int main() {
    ll n; cin >> n;
    vector<ll> v(n);
    for(auto &i : v) cin >> i;
    
    vector<ll> tmp = v;
    sort(tmp.begin(), tmp.end());
    
    if(tmp == v) {
        cout<<"yes\n";
        cout<<1<<' '<<1<<'\n';
        return 0;
    }

    ll i1=0,i2=0;
    while(i1 + 1 < n && v[i1] < v[i1+1]) i1++;
    i2 = i1+1;
    while(i2 < n && v[i2] < v[i2-1]) i2++;

    reverse(v.begin()+i1, v.begin()+i2);
    if(tmp == v) {
        cout<<"yes\n";
        cout<<i1+1<<' '<<i2<<'\n';
    }
    else cout<<"no\n";

    return 0;
}