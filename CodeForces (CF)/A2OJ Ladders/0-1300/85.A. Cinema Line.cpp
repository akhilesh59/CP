#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int taken=0,twc=0,fyc=0;
    int tmp = n;
    
    while(tmp--) {
        int x; cin>>x;
        int give = x-25;
        // if(give > taken) {
        //     cout<<"NO\n";
        //     return 0;
        // }

        // else {
            if(give == 75) {
                if(fyc > 0) fyc--;
                else twc -= 2;
                twc--;
            }
            else if(give == 25) twc--;
            if(twc < 0 || fyc < 0) {
                cout<<"NO\n";
                return 0;
            }
            if(x==25) twc++;
            else if(x==50) fyc++;
            // taken -= give;
            // taken += x;
        // }        
    }
    
    cout<<"YES\n";
    
    return 0;
}