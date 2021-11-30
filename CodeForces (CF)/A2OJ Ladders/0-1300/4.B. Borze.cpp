#include<iostream>
using namespace std;
 
int main() {
    string s;
    string ans;

    cin>>s;

    for(int i=0; i<s.length(); i++) {
        if(s[i] == '.') ans.push_back('0');
        if(s[i] == '-' && s[i+1] == '.') {
            ans.push_back('1');
            i++;
        }
        if(s[i] == '-' && s[i+1] == '-') {
            ans.push_back('2');
            i++;
        }
    }

    cout<<ans<<endl;

    return 0;
}