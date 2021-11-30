#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int topsum = 0, bottomsum = 0, oe = 0;
    int tmp = n;

    while (tmp--)
    {
        int x, y;
        cin >> x >> y;
        topsum += x;
        bottomsum += y;
        if ((x % 2 != 0 && y % 2 == 0) || (x % 2 == 0 && y % 2 != 0))
        {
            oe++;
        }
    }

    if ((topsum % 2 == 0) && (bottomsum % 2 == 0))
    {
        cout << 0 << "\n";
        return 0;
    }

    else if ((n == 1) && ((topsum % 2 != 0) || (bottomsum % 2 != 0)))
    {
        cout << -1 << "\n";
        return 0;
    }

    else if (topsum % 2 != 0 && bottomsum % 2 != 0)
    {
        if (oe > 0)
        {
            cout << 1 << "\n";
            return 0;
        }
        else
            cout << -1 << "\n";
    }

    else
        cout << -1 << "\n";

    return 0;
}