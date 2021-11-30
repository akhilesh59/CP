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

void sol()
{
    ll n;
    cin >> n;
    vl v(n); 
    for(auto &i : v) cin >> i;
    string s; cin >> s;
    deb(s);

    cout<<"call\n";
    vl b, r;
    Fln {
        if(s[i] == 'B') b.pb(v[i]);
        else r.pb(v[i]);
    }
    ll j=n;

    if(r.size() > 0) {
        sort_dec(r);
        for(ll i=0; i<r.size(); i++) {
            if(r[i] > n) {
                cout<<"NO\n";
                return;
            }
            else if(r[i] <= j) j--;
            deb(r[i]);
        }
    } 
    if(b.size() > 0) {
        sort_dec(b);
        for(ll i=0; i<b.size(); i++) {
            if(r[i] >= j) j--;
            deb(b[i]);
        }
    } 

    deb(j);

    if(j<=1) {
        cout<<"YES\n";
    }
    else cout<<"NO\n";

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
