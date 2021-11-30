#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    string ans = "";

    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            i += 2;
            if(ans.length() > 0) ans += " ";
            continue;
        }
        else ans += s[i];
    }
    cout<<ans<<"\n";

    return 0;
}