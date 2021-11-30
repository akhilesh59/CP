#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t;
    cin>>t;

    while(t--){
        ll N,rem,pip=0,t=0;
        cin>>N;

        t = N/4;

        if(N<4) {
            if(N == 1) pip = 20;
            else if(N == 2) pip = 40;
            else if(N == 3) pip = 51;
        }

        else if(N == 4) pip = 60;

        else {
            rem = N%4;

            pip = 44*t + (4-rem)*4;

            if(rem = 1) pip += 20;
            else if(rem == 2) pip += 40;
            else if(rem == 3) pip += 51;
        }

        cout<<pip<<"\n";
    }


    return 0;
}