#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll r,c,tl,tr,td,tu;
    cin>>r>>c;
    bool answer=false;
    char pas[r][c];
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cin>>pas[i][j];
    }
    }
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            tl=j-1;
            tr=j+1;
            tu=i-1;
            td=i+1;
            if(pas[i][j] == 'S') {
            if(pas[tu][j]=='W' || pas[td][j]=='W' || pas[i][tl]=='W' || pas[i][tr]=='W') {
                cout<<"No"<<endl;
                return 0;
            }
            }
            else {
                answer=true;
                if(pas[i][j]=='.')
                pas[i][j]='D';
            }
            }
    }
    if(answer) {
        cout<<"Yes"<<endl;
         for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cout<<pas[i][j];
    }
    cout<<endl;
    }
    }
    else cout<<"No"<<endl;
    return 0;

    }
    