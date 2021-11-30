#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin >> n >> m;
    int lim = min(n,m);
    int cnt = 0;

    for(int a=0; a<=lim; a++) {
        for(int b=0; b<=lim; b++) {
            if((a*a + b == n) && (a + b*b == m)) cnt++;
        }
    }

    cout<<cnt<<"\n";

    return 0;
}