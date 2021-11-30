#include <bits/stdc++.h>            // Accepted
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
#define itr_v for (auto it = v.begin(); it != v.end(); it++)
#define sort_asc(v) sort(v.begin(), v.end())
#define sort_dec(v) sort(v.begin(), v.end(), greater<int>())
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

void sol()
{
    ll n;
    cin >> n;
    string s; cin >> s;
    ll i=0, j=n-1;

    string tmp = s;
    sort_asc(tmp);

    if(tmp == s) {
        cout<<0<<'\n';
        return;
    }

    vl v;

    while(i < j) {

        if(s[i] == '1' && s[j] == '0') {
            swap(s[i],s[j]);
            v.pb(i+1);
            v.pb(j+1);
            i++;
            j--;
        }
        if(s[i] == '0') i++;
        if(s[j] == '1') j--;
    }

    // cout<<s<<'\n';

    ll k = v.size();

    cout<<1<<'\n';
    cout<<k<<" ";

    sort_asc(v);
    for(auto i : v) cout<<i<<' ';
    cout<<'\n';

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
