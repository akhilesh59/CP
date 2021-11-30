#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k; cin >> n >> k;
    
    while(n--){
        int x;
        cin >> x;
        if(x==k) {
            cout<<"1";
            return 0;
        }
    } 

    cout<<"-1";

    return 0;
}