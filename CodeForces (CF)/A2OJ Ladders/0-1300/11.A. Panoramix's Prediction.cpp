#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int num;

    for(int i=n+1; i<=m; i++) {
        bool chk = true;
        for(int j=2; j<i; j++) {
            if(i%j==0) chk = false;
        }
        if(chk) {
            num = i;
            break;
        }
    }

    if(num == m) cout<<"YES\n";
    else cout<<"NO"<<"\n";




    return 0;
}