#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t;
    cin>>t;

    while(t--) {
        double k1,k2,k3,v;
        cin>>k1>>k2>>k3>>v;
        double d = 100, s, t, temp, rec = 9.58;

        s = k1*k2*k3*v;

        t = d/s;

        temp = t;

        temp = temp*1000;

        int x = (int)temp;
        int ldig = x % 10;

        if(ldig >= 5) t = t + 0.01;

        if(t < rec) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }


    return 0;
}