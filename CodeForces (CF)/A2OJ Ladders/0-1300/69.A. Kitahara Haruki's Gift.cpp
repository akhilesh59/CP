#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,x1=0,x2=0,h1=0,h2=0; cin>>n;

    for(int i=0; i<n; i++) {
        int x; cin>>x;
        if(x==100) {
            x1 += x;
            h1++;
        }
        else {
            x2 += x;
            h2++;
        }
    }

    for(int i=0; i<n; i++) {
        if(x1 == x2) {
            cout<<"YES\n";
            return 0;
        }
        else if(x1>x2) {
            if(x1>100 && h1>0) {
                x1 -= 100;
                x2 += 100;
            }
        }
        else {
            if(x2>200 && h2>0) {
                x2 -= 200;
                x1 += 200;
            }
        }
    }

    cout<<"NO\n";

    return 0;
}