#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    unordered_map<string,int> ump;
    while(n--) {
        string tmp; cin >> tmp;
        ump[tmp]++;
    }

    string ans = "";
    int maxi = 0;
    
    for(auto i : ump) {
        if(i.second > maxi) {
            maxi = i.second;
            ans = i.first;
        }
        
    }

    cout<<ans<<"\n";

    return 0;
}