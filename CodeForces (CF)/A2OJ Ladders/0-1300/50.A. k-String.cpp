#include<bits/stdc++.h>
using namespace std;

int main() {
    int k; cin >> k;
    string s; cin >> s;
    if(k == 1) {
        cout<<s<<"\n";
        return 0;
    }
    string ans = "";

    unordered_map<char,int> ump;

    for(int i=0; i<s.length(); i++) {
        ump[s[i]]++;
    }

    for(auto& i : ump) {
        if(i.second % k != 0) {
            cout<<-1<<"\n";
            return 0;
        }
        i.second = i.second / k;
    }

    while(k--) {
        for(auto& i : ump) {
            int t = i.second;
            while(t--) {
                ans += i.first;
            }
        }
    }
    
    cout<<ans<<"\n";

    return 0;
}