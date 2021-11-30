#include<bits/stdc++.h>
using namespace std;
#define MOD 1073741824
#define ll long long

int no_of_factors(ll k) {
    int res=0;
    for(int i=1; i*i<=k; i++) {
        if(k%i == 0) {
            if(i*i == k) res++;
            else res += 2;
        }
    }
    return res;
}

int main() {
    ll a,b,c; cin>>a>>b>>c;
    vector<long long> ans(a*b*c + 5,0);
    ll sum = 0;

    for(int i=1; i<=a; i++) {
        for(int j=1; j<=b; j++) {
            for(int k=1; k<=c; k++) {
                if(ans[i*j*k] == 0) {
                    ll x = no_of_factors(i*j*k);
                    ans[i*j*k] = x;
                }
                sum += ans[i*j*k];
            }
        }
    }

    cout<<sum<<endl;

    return 0;
}