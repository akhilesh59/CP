#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b,c,cnt = 0; cin >> n >> a >> b >> c;
    
    if(a == b and b == c and c == n) {
        cout<<1<<"\n";
        return 0;
    }

    for(int i=0; i<=4000; i++) {
        for(int j=0; j<=4000; j++) {
            double x = i*a + j*b - n;
            x /= c;
            if(floor(x) - x == 0) cnt++;
            // for(int k=0; k<=4000; k++) {
            //     if((i*a + j*b + k*c) == n) cnt++;
            //     else if((i*a + j*b + k*c) > n) break;
            // }
        }
    }

    cout<<cnt<<"\n";

    return 0;
}