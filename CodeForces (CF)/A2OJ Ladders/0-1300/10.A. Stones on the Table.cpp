#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin>>s;

    int cnt=0;

    for(int i=0; i<n; i++) {
        int j=i+1;

        while(s[i] == s[j] && j<n) {
            cnt++;
            j++;
        }
        i = j-1;
    }

    cout<<cnt<<"\n";

    return 0;
}