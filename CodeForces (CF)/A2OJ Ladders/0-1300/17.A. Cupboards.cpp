#include<iostream>
using namespace std;

int main() 
{
    int n,loc=0,lzc=0,roc=0,rzc=0; cin >> n;
    int arr[n][2];

    for(int i=0; i<n; i++) {
        for(int j=0; j<2; j++) {
            cin>>arr[i][j];
            if(j == 0) {
                if(arr[i][j] == 1) loc++;
                else lzc++;
            }
            else if(j == 1) {
                if(arr[i][j] == 1) roc++;
                else rzc++;
            }
        }
    }

    int ans = min(loc,lzc) + min(roc,rzc);

    cout<<ans<<"\n";

    return 0;
}