#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;

    vector<int> v1(26,0);
    vector<int> v2(26,0);

    for(int i=0; i<s1.length(); i++) {
        int x = s1[i] - 'A';
        v1[x]++;
    }
    for(int i=0; i<s2.length(); i++) {
        int x = s2[i] - 'A';
        v1[x]++;
    }
    for(int i=0; i<s3.length(); i++) {
        int x = s3[i] - 'A';
        v2[x]++;
    }

    for(int i=0; i<26; i++) {
        if(v1[i] < v2[i]) {
            cout<<"NO"<<"\n";
            return 0;
        }
    }

    cout<<"YES"<<"\n";

    return 0;
}