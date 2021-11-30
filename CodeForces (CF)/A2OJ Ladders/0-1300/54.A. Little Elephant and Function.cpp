#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    if(n == 1) {
        cout<<1<<"\n";
        return 0;
    }
    
    vector<int> v(n+1);
    v[1] = n;

    for(int i=2; i<=n; i++) v[i] = i-1;

    // if(n%2 == 0) {
    //     for(int i=1; i<n; i += 2) swap(v[i], v[i+1]);
    // }
    // else {
    //     for(int i=1; i<n-1; i += 2) swap(v[i], v[i+1]);
    // }

    for(int i=1; i<=n; i++) cout << v[i] <<" ";

    return 0;
}