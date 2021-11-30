#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;

    int cnt = 0;

    for(int a=2; a<=n; a++) {
        for(int b=a+1; b<=n; b++) {
            int c = a*a + b*b;
            if(sqrt(c)*sqrt(c) == c && sqrt(c) <= n) cnt++;
        }
    }

    cout<<cnt<<"\n";

    return 0;
}