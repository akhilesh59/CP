#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int arr[n][2];

    for(int i=0; i<n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    int cnt = 0;

    for(int i=0; i<n; i++) {
        int x = arr[i][0];
        int y = arr[i][1];
        int t=0,l=0,d=0,r= 0;
        for(int j=0; j<n; j++) {
            if(arr[j][0] == x && arr[j][1] > y) r++;
            if(arr[j][0] == x && arr[j][1] < y) l++;
            if(arr[j][0] > x && arr[j][1] == y) d++;
            if(arr[j][0] < x && arr[j][1] == y) t++;
        }
        if(t and l and d and r) cnt++;
    }

    cout<<cnt<<"\n";


    return 0;
}