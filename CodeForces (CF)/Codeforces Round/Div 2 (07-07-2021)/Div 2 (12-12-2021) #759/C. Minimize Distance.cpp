#include <bits/stdc++.h>        // Accepted - After Contest
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
    ll n,k,bag,ans=0;
    cin >> n >> k;
    vl v(n);
    vl pos;
    vl neg;
    Fln {
        cin >> v[i];
        if(v[i] > 0) pos.pb(v[i]);
        else neg.pb(v[i]);
    }

    ll ns = neg.size();
    ll ps = pos.size();

    sort_dec(neg);
    sort_asc(pos);

    ll iit = (ps%k == 0) ? k : (ps%k); //Initial Items to be taken for positive vector
    while(iit < ps) {
        ans += 2LL*pos[iit-1];
        iit += k;
    }

    iit = (ns%k == 0) ? k : (ns%k); // Initial Items to be taken for negative vector
    while(iit < ns)  {
        ans += 2LL*abs(neg[iit-1]);
        iit += k;
    }

    if(ps && ns) ans += pos[ps-1] + abs(neg[ns-1]) + min(abs(neg[ns-1]), pos[ps-1]);
    else if(ps > 0) ans += pos[ps-1];  // last wale index tak pahuchne ka distance bhi to add karna hai na
    else ans += abs(neg[ns-1]);

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
