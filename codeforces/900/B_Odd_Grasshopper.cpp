#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll x, n;
        cin >> x >> n;
        ll i = 1;
        ll curr = x;
        if (x % 2 == 0)
        {
            if (n % 4 == 0)
            {
                cout << x << '\n';
            }
            else if (n % 4 == 1)
            {
                cout << x - n << '\n';
            }
            else if (n % 4 == 2)
            {
                cout << x + 1 << '\n';
            }
            else
            {
                cout << x + n + 1 << '\n';
            }
        }
        else
        {
            if (n % 4 == 0)
            {
                cout << x << '\n';
            }
            else if (n % 4 == 1)
            {
                cout << x + n << '\n';
            }
            else if (n % 4 == 2)
            {
                cout << x - 1 << '\n';
            }
            else
            {
                cout << x - n - 1 << '\n';
            }
        }
    }

    return 0;
}
