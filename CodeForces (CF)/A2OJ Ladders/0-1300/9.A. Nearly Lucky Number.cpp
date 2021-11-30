#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if(n<10) {
        cout<<"NO"<<"\n";
        return 0;
    }

    int ln = 0;

    while(n) {
        int tmp = n%10;
        if(tmp == 4 || tmp == 7) ln++;
        n/=10;
    }

    int t = ln;

    while(ln) {
        int tmp = ln%10;
        if(!(tmp == 4 || tmp == 7)) {
            cout<<"NO"<<"\n";
            return 0;
        }
        ln/=10;
    }

    if(t > 0) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";

    return 0;
}