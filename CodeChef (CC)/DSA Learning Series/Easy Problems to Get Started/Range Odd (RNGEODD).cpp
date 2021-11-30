#include<iostream>
using namespace std;

int main() {
    int l,r; 
    cin >> l >> r;

    while(l <= r) {
        if(l&1) cout<<l<<" ";
        l++;
    }

    return 0;
}