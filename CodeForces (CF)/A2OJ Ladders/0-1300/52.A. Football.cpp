#include"iostream"
using namespace std;

int main() {
    string s; cin >> s;
    int streak = 0, maxi = 0;

    for(int i=1; i<s.length(); i++) {
        if(s[i] == s[i-1]) streak++;
        else streak = 0;
        maxi = max(maxi, streak);
    }

    if(++maxi >= 7) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";

    return 0;
}