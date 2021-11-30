#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll t;

    cin >> t;
    while (t--)
    {
        ll temp, n, m, ep = 0, eq = 0, op = 0, oq = 0;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp % 2 == 0 || temp == 0)
                ep++;
            else
                op++;
        }

        cin >> m;
        for (ll i = 0; i < m; i++)
        {
            cin >> temp;
            if (temp % 2 == 0 || temp == 0)
                eq++;
            else
                oq++;
        }
        
        ll ans;
        ans = ((ep * eq) + (op * oq));
        cout << ans << endl;
    }

    return 0;
}