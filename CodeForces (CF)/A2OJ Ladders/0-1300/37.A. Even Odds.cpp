#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    long long k; cin >> k;
    long long ec = n/2;
    long long oc = (n%2 == 0) ? ec : ec+1;
    long long ans;

    if(k > oc) {
        k = k-oc;
        ans = k*2;
    }
    else ans = k*2 - 1;

    cout<<ans<<"\n";
    

    return 0;
}