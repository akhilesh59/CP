#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t;
    cin>>t;

    while(t--) {
        ll N,K;
        cin>>N>>K;
        string s;
        cin>>s;

        int flag = 0;
        ll count = 0;

        for(ll i=0; i<N; i++) {
            if(s[i] == '*') count++;
            else count = 0;
             if(count == K) {
                cout<<"YES"<<"\n";
                flag = 1;
                break;
            }
        }

        if(flag == 0) cout<<"NO"<<"\n";
    }


    return 0;
}