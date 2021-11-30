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
#define complete v.begin(), v.end()
#define itr_v for (auto it = v.begin(); it != v.end; it++)
#define sort_asc sort(v.begin(), v.end())
#define sort_dec sort(v.begin(), v.end(), greater<int>())

void sol()
{
    ll a, b, n, cnt = 0;
    ;
    cin >> a >> b;
    ll ta = a, tb = b;

    if (__gcd(a, b) == 0 || a == b)
    {
        cout << 0 << " " << 0 << "\n";
        return;
    }
    if (abs(a - b) == 1)
    {
        cout << 1 << " " << 0 << "\n";
        return;
    }

    ll diff = abs(a - b);

    if(a%diff != 0) {
        cnt = min(diff - (a%diff), a%diff);
    }

    cout << diff << " " << cnt << "\n";
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
