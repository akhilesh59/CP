#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define Fin for(int i=0; i<n; i++)
#define Fi1n for(int i=0; i<=n; i++)
#define Fln for(ll i=0; i<n; i++)
#define Fi1n for(int i=0; i<=n; i++)
#define Fim for(int m=0; i<m; i++)
#define Fi1m for(int i=0; i<=m; i++)
#define Flm for(ll i=0; i<m; i++)
#define Fi1m for(int i=0; i<=m; i++)
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define sort_asc sort(v.begin(), v.end())
#define sort_dec sort(v.begin(), v.end(), greater<int> ())

void sol() {
    ll n,w,wr,total;
    cin>> n >> w >> wr;
    total = wr;

    ll fq[100007] = {0};
    Fln {
        ll tmp;
        cin>>tmp;
        fq[tmp]++;
    }

    for(ll i=0; i<100005; i++) {
        if(fq[i] > 0) {
            if(fq[i] & 1) fq[i]--;
            total += i * fq[i];
        }
    }

    if(total >= w) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

int main() {
    ll t;
    cin>>t;

    while(t--) {
        sol();
    }

    return 0;
}

