#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    string s = to_string(n);
    long long fc=0, oc=0, cf=0;
    if(s[0] != '1') {
        cout<<"NO"<<"\n";
        return 0;
    }
    else oc++;

    for(int i=1; i<s.length(); i++) {
        if(s[i] == '1') {
            oc++;
            cf = 0;
        }

        else if(s[i] == '4' && cf<2) {
            fc++;
            cf++;
        }

        else {
            cout<<"NO"<<"\n";
            return 0;
        }
    }

    if(fc > 2*oc) cout<<"NO"<<"\n";
    else cout<<"YES"<<"\n";    

    return 0;
}