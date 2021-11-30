#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t; cin>>t;
    ll s1,s2,d1,d2; cin>>s1>>s2>>d1>>d2;
    string s; cin>>s;
    ll diffx = d1-s1;
    ll diffy = d2-s2;
    char ch1,ch2;
    ll ans = 0;
    unordered_map<char,ll> ump;
    

    ch1 = (diffx >= 0) ? 'E' : 'W';
    ch2 = (diffy >= 0) ? 'N' : 'S';

    ump[ch1] = abs(diffx);
    ump[ch2] = abs(diffy);
    

    for(ll i=0; i<t; i++) {
        if(ump[s[i]] > 0) ump[s[i]]--;
        if(ump[ch1] == 0 && ump[ch2] == 0) {
            ans = i+1;
            break;
        }
    }

    if(ans > 0) cout<<ans<<"\n";
    else cout<<-1<<"\n";
    

    return 0;
}