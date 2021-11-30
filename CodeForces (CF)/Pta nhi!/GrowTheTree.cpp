#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll n, x = 0, y = 0, ans = 0;
    cin >> n;

    vector<ll> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<ll>::iterator it;
    it = v.begin();
    sort(v.begin(), v.end());
    for (int i = 0; i < n / 2; i++)
        x += v[i];

    for (int i = n / 2; i < n; i++)
        y += v[i];

    ans = x * x + y * y;
    cout << ans << endl;

    return 0;
}
