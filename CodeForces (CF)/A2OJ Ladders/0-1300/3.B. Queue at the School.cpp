#include<iostream>
using namespace std;
 
int main() {
    string s;
    int n,t;
    cin>>n>>t;
    cin>>s;

    for(int j=0; j<t; j++)
        for(int i=0; i<n; i++) {
            if(s[i+1] == 'G' && s[i] == 'B') {
                swap(s[i+1], s[i]);
                i++;
            }

    }

    cout<<s<<endl;

    return 0;
}