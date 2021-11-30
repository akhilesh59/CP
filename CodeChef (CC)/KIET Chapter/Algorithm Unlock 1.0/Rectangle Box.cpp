#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define umpll unordered_map<ll, ll>
#define umpsl unordered_map<string, ll>
#define mkpr make_pair
#define Fien for (int i = 0; i <= n; i++)
#define Fln for (ll i = 0; i < n; i++)
#define pb push_back
#define complete(v) v.begin(), v.end()
#define itr_v for (auto it = v.begin(); it != v.end; it++)
#define sort_asc(v) sort(v.begin(), v.end())
#define sort_dec(v) sort(v.begin(), v.end(), greater<int>())
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

bool cmp(pair<ll,ll> &a, pair<ll,ll> &b) {
    return a.first > b.first;
}

void sol()
{
    ll n;
    cin >> n;

    vector<pair<ll,ll>> vp;
    // vector<pair<ll,ll>> vp2;
    Fln {
        ll h,w; cin >> h >> w;
        vp.pb({h,w});
    }

    // sort(vp.begin(), vp.end(), cmp);

    ll prev = max(vp[0].first, vp[0].second);

    for(ll i=0; i<n-1; i++) {
        // if(vp[i].first >= vp[i+1].first || vp[1].first >= vp[i+1].second) continue;
        // if(vp[i].second >= vp[i+1].first || vp[i].second >= vp[i+1].second) continue;
        if(prev >= max(vp[i+1].first, vp[i+1].second)) {
            prev = max(vp[i+1].first, vp[i+1].second);
            continue;
        }
        else if(prev >= min(vp[i+1].first, vp[i+1].second)) {
            prev = min(vp[i+1].first, vp[i+1].second);
            continue;
        }
        else {
            cout<<"NO\n";
            return;
        }
    }

    cout<<"YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    // cin >> t;

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
