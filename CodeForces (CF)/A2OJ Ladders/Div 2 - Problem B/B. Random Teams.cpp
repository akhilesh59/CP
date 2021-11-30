#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n,m; cin >> n >> m;
    ll mini=0,maxi=0;

    if(m == 1) {
        mini = (n*(n-1))/2;
        maxi = mini;
    }
    else if(n == m) {
        mini = 0;
        maxi = 0;
    }
    else {
        ll ini = n/m;
        vector<ll> v(m,ini);
        ll tmp = n - (ini*m),i=0;
        while(tmp) {
            i = i%m;
            v[i++]++;
            tmp--;
        }
        
        for(int i=0; i<m; i++) {
            mini += (v[i]*(v[i]-1))/2;
        }

        ll max_n = n-(m-1);
        maxi = (max_n*(max_n - 1))/2;
    }

    cout<<mini<<" "<<maxi<<" \n";

    return 0;
}