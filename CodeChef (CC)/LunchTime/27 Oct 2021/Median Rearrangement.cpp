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
    ll n,k;
    cin >> n >> k;

    ll size = n*n;

    vl v(size); 
    for(auto &i : v) cin >> i;

    sort_asc(v);
    ll sum = 0;
    bool chk = true;
    ll mini = INT_MAX;
    ll j = size-n-1;
    ll i = j-n;

    for(auto i : v) cout<<i<<' ';

    while(chk && i >= 0) {

        for(int z = i; z <= j; z++) {
            mini = min(mini,v[z]);
            sum += v[z];
            
        }
        if(sum <= k) {
            cout<<"Hello\n";
            chk = false;
            break;
        }
        else {
            j--;
            i--;
        }
    }

    if(!chk) cout<<mini<<'\n';
    else cout<<-1<<'\n';


    // vl tmp;
    // ll d = (n+1)/2;

    // for(ll i=d; i<size - n; i++) {
    //     if(i%d == 0) tmp.pb(v[i]);
    // }

    // for(auto i : v) cout<<i<<' ';
    // cout<<'\n';

    // for(auto i : tmp) cout<<i<<' ';
    // cout<<'\n';

    // for(auto i : tmp) {
    //     sum += i;
    //     maxi = min(maxi,i);
    // }

    // if(sum <= k) {
    //     cout<<maxi<<'\n';
    // }
    // else cout<<-1<<'\n';
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
