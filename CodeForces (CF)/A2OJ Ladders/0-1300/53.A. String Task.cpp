#include"iostream"
#include<algorithm>
using namespace std;

int main() {
    string s; cin >> s;
    string ans = "";
    transform(s.begin(), s.end(), s.begin(), :: tolower);

    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y') {
            continue;
        }
        else {
            ans += '.';
            ans += s[i];
        }
    }

    cout<<ans<<"\n";

    return 0;
}