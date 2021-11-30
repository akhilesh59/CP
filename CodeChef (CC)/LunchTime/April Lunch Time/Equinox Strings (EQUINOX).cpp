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
    ll n,A,B,a = 0, sa = 0;
    string sar = "SARTHAK";
    string anu = "ANURADHA";
    cin>>n>>A>>B;

    while(n--) {
        string s;
        cin>>s;

        if(s[0] == 'E' || s[0] == 'Q' || s[0] == 'U' || s[0] == 'I' || s[0] == 'N' || s[0] == 'O' || s[0] == 'X') {
            sa += A;
        }
        else a += B;
    }

    if(sa > a) cout<<sar<<endl;
    else if(sa == a) cout << "DRAW" <<endl;
    else cout<<anu<<endl;

}

int main() {
    ll t;
    cin>>t;

    while(t--) {
        sol();
    }

    return 0;
}

