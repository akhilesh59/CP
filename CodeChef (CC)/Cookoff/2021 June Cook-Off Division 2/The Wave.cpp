#include<bits/stdc++.h>     // -> Incomplete
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define umpll unordered_map<ll,ll>
#define umpsl unordered_map<string,ll>
#define mkpr make_pair
#define Fien for(int i=0; i<=n; i++)
#define Fln for(ll i=0; i<n; i++)
#define pb push_back
#define complete v.begin(),v.end()
#define itr_v for(auto it = v.begin(); it != v.end; it++)
#define sort_asc sort(v.begin(), v.end())
#define sort_dec sort(v.begin(), v.end(), greater<int> ())

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,q,ans = 1;
    cin >> n >> q;

    set<int> s;

    Fln {
        ll x; cin >> x;
        s.insert(x);
    }

    while(q--) {
        ll r; cin >> r;
        auto it = s.lower_bound(r);
        if(it == s.end()) {
            ll idx = it - s.begin();
        }
        else cout << 0 << "\n";
    }


    return 0;
}

