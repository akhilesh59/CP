#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define vl vector<long long>

void fun() {
    string y = "YES";
    string n = "NO";

    ll X,Y,Xr,Yr,D,check = 0;
    cin >> X >> Y >> Xr >> Yr >> D;

    while(D--) {
        if(X < Xr || Y < Yr) {
            cout<<n<<endl;
            return;
        }
        else {
            X -= Xr;
            Y -= Yr;
        }
    }

    if(X >= 0 && Y >= 0) cout<<y<<endl;
    else cout<<n<<endl;
}

int main() {
    ll t;
    cin>>t;

    while(t--) {
        fun();
    }

    return 0;
}