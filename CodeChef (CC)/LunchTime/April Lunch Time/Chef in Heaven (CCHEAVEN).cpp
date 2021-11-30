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

ll score(ll y, ll bit) {
    return (bit*100)/y;
}

void sol() {
    ll n,count = 0;
    cin>>n;

    string str;
    cin>>str;

    Fin {
        char tmp = str[i];
        if(tmp == '1') count += 1;
        if(score(i+1,count) >= 50) {
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;

}

int main() {
    ll t;
    cin>>t;

    while(t--) {
        sol();
    }

    return 0;
}

