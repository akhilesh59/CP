#include <bits/stdc++.h>            // Accepted - After Contest
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
    map<ll,ll> mp;
    for(auto &i : v) {
        cin >> i;
        mp[i]++;
    }

    umpll mp2;


    for(auto it : mp) {
        if(it.second >= 8) mp2[8]++;
        else if(it.second >= 6) mp2[6]++;
        else if(it.second >= 4) mp2[4]++;
        else if(it.second >= 2) mp2[2]++;
    }

    ll q; cin >> q;
    while(q--) {
        char sign; cin >> sign;
        ll x; cin >> x;
        if(sign == '+') {
            
            if(mp[x] == 7) {
                mp2[8]++;
                if(mp2[6] > 0) mp2[6]--;
            }
            else if(mp[x] == 5) {
                mp2[6]++;
                if(mp2[4] > 0) mp2[4]--;
            }
            else if(mp[x] == 3) {
                mp2[4]++;
                if(mp2[2] > 0) mp2[2]--;
            }
            else if(mp[x] == 1) mp2[2]++;
            mp[x]++;
        }
        else {
            if(mp[x] == 8) {
                if(mp2[8] > 0) mp2[8]--;
                mp2[6]++;
            }
            else if(mp[x] == 6) {
                if(mp2[6] > 0) mp2[6]--;
                mp2[4]++;
            }
            else if(mp[x] == 4) {
                if(mp2[4] > 0) mp2[4]--;
                mp2[2]++;
            }
            else if(mp[x] == 2) {
                if(mp2[2] > 0) mp2[2]--;
            }
            
            if(mp[x] > 0) mp[x]--;            
        }

        if(mp2[8] || mp2[6] > 1 || (mp2[6] && mp2[4]) || (mp2[6] && mp2[2]) || (mp2[4] > 1) || (mp2[4]>0 && mp2[2]>1)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sol();

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
