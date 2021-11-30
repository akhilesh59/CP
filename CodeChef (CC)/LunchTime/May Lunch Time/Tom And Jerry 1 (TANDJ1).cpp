#include <bits/stdc++.h>                    //--------- ACCEPTED ------------------
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
#define complete v.begin(), v.end()
#define itr_v for (auto it = v.begin(); it != v.end; it++)
#define sort_asc sort(v.begin(), v.end())
#define sort_dec sort(v.begin(), v.end(), greater<int>())

void sol()
{
    ll a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;

    ll res = abs(c - a) + abs(d - b);

    if (res > k)
        cout << "NO"
             << "\n";
    else if ((k - res) % 2 == 0)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
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
