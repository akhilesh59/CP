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
    // cout<<n<<'\n';
    vl v(9LL); for(auto &i : v) cin >> i;

    vl a;
    ll tmp = n,s=-1,e=-1;

    // for(auto i : v) cout<<i<<' ';

    while(tmp) {
        ll x = tmp%10;
        a.pb(x);
        tmp /= 10;
    }

    reverse(complete(a));
    ll size = a.size();
    // for(auto i : a) cout<<i<<' ';

    for(ll i=0; i<size; i++) {
        if(v[a[i]-1] > a[i]) {
            s = i;
            for(ll j=i; j<size; j++) {
                if(v[a[j]-1] > a[j]) e = j;
                else {
                    i = j;
                    break;
                }
            }
        }
        
    }

    if(s!=-1 && e != -1) {
        for(ll k=s; k<=e; k++) {
            a[k] = v[a[k]-1];
        }
    }
    for(auto i : a) cout<<i;
    cout<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
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
