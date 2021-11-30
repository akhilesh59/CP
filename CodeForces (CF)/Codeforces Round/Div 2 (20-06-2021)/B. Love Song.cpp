#include<bits/stdc++.h>     // -> Accepted
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define umpll unordered_map<ll,ll>
#define umpsc unordered_map<char,ll>
#define mkpr make_pair
#define Fien for(int i=0; i<=n; i++)
#define Fln for(ll i=0; i<n; i++)
#define pb push_back
#define complete v.begin(),v.end()
#define itr_v for(auto it = v.begin(); it != v.end; it++)
#define sort_asc sort(v.begin(), v.end())
#define sort_dec sort(v.begin(), v.end(), greater<int> ())

// void sol() {
//     ll n;
//     cin>>n;

// }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,q; cin >> n >> q;
    string s;
    cin >> s;

    vl v(n+1,0);

    Fln {
        ll num = s[i] - 'a' + 1;
        if(i > 0) v[i] = num + v[i-1];
        else v[i] = num;
    }

    while(q--) {
        ll ans = 0;
        ll l,r; cin >> l >> r;
        if(l-2 >= 0) ans = v[r-1] - v[l-2];
        else ans = v[r-1];

        cout<<ans<<"\n";
    }

    return 0;
}

