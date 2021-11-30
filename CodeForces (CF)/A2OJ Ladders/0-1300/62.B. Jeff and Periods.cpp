#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int oc = 0;
    int arr[26] = {0};
    int l = s.length();

    for(int i=0; i<s.length(); i++) {
        int x = s[i] - 'a';
        arr[x]++;
    }

    for(int i=0; i<26; i++) {
        if(arr[i] > 0) {
            if(arr[i]%2 != 0) oc++;
        }
    }

    if(oc == l) {
        if(oc%2 == 0) {
            cout<<"Second"<<'\n';
            return 0;
        }
        else {
            cout<<"First"<<'\n';
            return 0;
        }
    }
    else if(oc == 0) {
        cout<<"Second"<<'\n';
        return 0;
    }
    else if(oc == 1) {
        cout<<"First"<<'\n';
        return 0;
    }
    else if(oc > 1 && l%2==0) {
        cout<<"First"<<'\n';
        return 0;
    }
    else cout<<"Second"<<'\n';

    return 0;
}