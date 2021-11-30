#include<bits/stdc++.h>
using namespace  std;

#define ll long long

int main() {
    ll t;
    cin>>t;
    string yes = "YES";
    string no = "NO";

    while(t--) {
        ll n,x=0;
        cin>>n;

        if(n>1 && n%2 != 0) {
            cout<<yes<<endl;
            continue;
        }

        if(n%2 == 0) {
            cout<<no<<endl;
            continue;
        }

    }

    return 0;
}