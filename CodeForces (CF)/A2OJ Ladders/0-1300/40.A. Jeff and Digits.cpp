#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    vector<long long> v(n);
    long long z = 0,f=0;
    for(auto& i : v) {
        cin>>i;
        if(i == 0) z++;
        else f++;
    }
    
    if(z==0) cout<<-1<<"\n";
    else {
        string ans = "";
        if(f>=9) {
            long long tmp = f/9;
            tmp *= 9;
            while(tmp--) {
                ans += '5';
            }
            while(z--) ans += '0';

        }
        if(ans.length() == 0) cout<<0<<"\n";
        cout<<ans<<"\n";
    }

    return 0;
}