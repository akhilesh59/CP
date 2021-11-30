#include <bits/stdc++.h>                // Accepted
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define umpll unordered_map<ll, ll>
#define umpsl unordered_map<string, ll>
#define mkpr make_pair
#define Flen for (ll i = 0; i <= n; i++)
#define Fln for (ll i = 0; i < n; i++)
#define pb push_back
#define complete(v) v.begin(), v.end()
#define itr_v for (auto it = v.begin(); it != v.end; it++)
#define sort_asc(v) sort(v.begin(), v.end())
#define sort_dec(v) sort(v.begin(), v.end(), greater<int>())
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

void resetMap(umpll &mp, ll n) {
    Flen {
        mp[i] = 0;
    }
}

void sol()
{
    ll n;
    cin >> n;
    vl v(n);
    umpll mp;
    for(auto &i : v) {
        cin >> i;
    }
    
    for(auto i : v) mp[i]++;
    
    vector<vector<ll>> ans;
    ans.pb(v);
    
    while(1) {
        for(ll j=0; j<n; j++) {
            v[j] = mp[v[j]];
        }
        
        // resetMap(mp,n);
        mp.clear();
        for(auto k : v) mp[k]++;
        
        if(ans.size() && v == ans[ans.size()-1]) break;
        else ans.pb(v);
    }
    
    ll q; cin >> q;
    while(q--) {
        ll x,k; cin >> x >> k;
        if(k >= ans.size()) cout<<ans[ans.size()-1][x-1]<<'\n';
        else cout<<ans[k][x-1]<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
    {
        sol();
    }

    return 0;
}

/*
*
*　　┏┓　　　┏┓+ +
*　┏┛┻━━━┛┻┓ + +
*　┃　　　　　　　┃
*　┃　　　━　　　┃ ++ + + +
*  +████━████++
*  ◥██◤　◥██◤ +
*　┃　　　┻　　　┃
*　┃　　　　　　　┃ + +
*　┗━┓　　　┏━┛
*　　　┃　　　┃ + + + + 
*　　　┃　　　┃ + Beware of the Dog
*　　　┃　 　 ┗━━━┓ 　
*　　　┃ 　　　　　　 ┣┓
*　　  ┃ 　　　　　 　┏┛
*　    ┗┓┓┏━┳┓┏┛ + + + +
*　　　　┃┫┫　┃┫┫
*　　　　┗┻┛　┗┻┛+ + + +
*/