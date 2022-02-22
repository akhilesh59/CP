#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ll t;
    cin>>t;

    while(t--) {
        ll an,bn,cn,T,A,B,C,sum;
        cin >> an >> bn >> cn >> T >> A >> B >> C;
        //cout<< an << " " << bn << " " << cn << " " << T << " " << A << " " << B << " " << C<< "\n";

    sum = A+B+C;

    if(sum>=T && A >= an && B >= bn && C >= cn) {
        cout<<"YES"<<"\n";
    }
    else cout<<"NO"<<"\n";
    }
    


    return 0;
}