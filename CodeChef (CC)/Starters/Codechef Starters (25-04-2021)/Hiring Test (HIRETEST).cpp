#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define vl vector<long long>

void fun() {

    ll N,M,X,Y;
    cin >> N >> M >> X >> Y;

    string ans = "";

    while(N--) {
        string s;
        cin >> s;

        ll f = 0, p = 0;

        for(ll i=0; i<s.length(); i++) {
            if(s[i] == 'F') f++;
            else if(s[i] == 'P') p++;
        }

        if((f >= X || p >= Y) && (f >= X-1)) ans += "1";
        else {
            ans = ans + "0";
        }

    }

    cout<<ans<<endl;
}

int main() {
    ll t;
    cin>>t;

    while(t--) {
        fun();
    }

    return 0;
}