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
    ll n;
    cin >> n;
    vl v(n);
    ll m1=INT_MIN,m2=INT_MIN,id1=-1,id2=-1,ans=0;
    Fln {
        cin >> v[i];
        if(m1<=v[i]) {
            m1 = v[i];
            id1 = i;
        }
    }
    ll x = v[n-1];

    // for(ll i=id1+1; i<n; i++) {
    //     if(m2<v[i] && m1 > v[i]) {
    //         m2 = v[i];
    //         id2 = i;
    //     }
    // }

    if(id1 == n-1) ans = 0;
    else {
        ll cnt = 0;
        for(ll i=n-1; i>=0; i--) {
            if(v[i] > x) {
                cnt++;
                x = v[i];
            }
            if(v[i] == m1) break;
        }
        ans = cnt;
    }

    cout<<ans<<'\n';

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
