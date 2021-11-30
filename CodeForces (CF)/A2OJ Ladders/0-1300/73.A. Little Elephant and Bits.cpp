#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second

int main() {
    long long n, chk = 1;
    cin >> n;
    
    string s = to_string(n);
    string ans = "";

    for(auto i : s) {
        if(chk && i == 0) {
            chk = 0;
            continue;
        }
        ans += i;
    }

    cout<<ans<<"\n";

    return 0;
}