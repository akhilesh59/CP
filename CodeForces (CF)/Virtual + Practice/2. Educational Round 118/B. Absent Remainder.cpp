#include <bits/stdc++.h>        // Accepted
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

void sol()
{
    ll n, cnt=0, p;
    cin >> n;
    p = floor(n/2);
    umpll mp;
    vl v(n);
    unordered_set<ll> st;
    for(auto &i : v) {
        cin >> i;
    }

    sort_asc(v);

    // Fln {
    //     ll y = v[i];
    //     mp[y] = 1;

    //     for(ll j=i+1; j<n; j++) {
    //         ll x = v[j];
    //         ll mod = x%y;
    //         if(mp[mod] == 0) {
    //             if(cnt >= p) return;
    //             else {
    //                 cout<<x<<' '<<y<<'\n';
    //                 cnt++;
    //             }
    //         }
    //     }
    // }

    // Smart Logic :

    for(ll i=1; i<n && cnt<p; i++) {
        cout<<v[i]<<' '<<v[0]<<'\n';
        cnt++;
    }

    // cout<<'\n';

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
