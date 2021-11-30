#include<bits/stdc++.h>
using namespace std;
#define M 10000005

int main() {
    long long n, cnt = 0;
    cin >> n;
    vector<long long> p(M,0);

    for(long long i=2; i<=M; i++) {
        if(p[i] == 0) {
            for(long long j=i*i; j<=M; j=j+i) {
                p[j] = 1;
            }
        }
    }

    int i=2;

    while(cnt < n) {
        if(p[i] == 0) {
            cout<<i<<" ";
            cnt++;
        }
        i++;
    }

    return 0;
}