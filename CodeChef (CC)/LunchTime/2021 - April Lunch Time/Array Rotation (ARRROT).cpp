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
    ll n,sum = 0;
    cin>>n;

    ll modu = (1e9 + 7);

    vl v(n+1);

    Fin {
        cin>>v[i];
        sum += v[i];
    }

    ll q; cin>>q;
    Fin {
        ll tmp2;
        cin>>tmp2;
    }

    ll ans = sum;

    while(q--) {
        ans += ans;
        ans = ((ans % modu) + modu) % modu;
        cout<<ans<<endl;
    }

}

int main() {

    sol();

    return 0;
}

