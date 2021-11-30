#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    vector<int> v;
    string ans = "";

    for(int i=0; i<s.length(); i++) {
        if(s[i] >= '1' and s[i] <= '3') {
            int x = s[i] - '0';
            v.push_back(x);
        }
    }

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++) {
        ans += (to_string(v[i]));
        if(i < v.size()-1) ans += '+';
    }

    cout<<ans<<"\n";

    return 0;
}