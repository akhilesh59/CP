#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m,mini=0,maxi=0; cin >> n >> m;
    vector<int> v(m+1,0);
    
    for(auto& i : v) cin >> i;
    vector<int> v2 = v;
    int n2 = n;

    
    while(n>0) {
        sort(v.begin(),v.end(), greater<int> ());
        maxi += v[0];
        v[0]--;
        n--;
    }

    if(n>0) {
        for(int i=0; i<m && n>0; i++) {
            if(n>0) {
                while(v[i] >0 && n>0) {
                    maxi += v[i];
                    v[i]--;
                    n--;
                }
            }
        }
    }

    sort(v2.begin(),v2.end());

    for(int i=0; i<=m && n2>0; i++) {
        if(n2>0) {
            while(v2[i] >0 && n2>0) {
                mini += v2[i];
                v2[i]--;
                n2--;
            }
        }
    }

    cout<<maxi<<" "<<mini<<"\n";

    return 0;
}