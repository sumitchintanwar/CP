#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll p, q;
    cin >> p >> q;

    ll v = 3 * p - 2 * q;

    if (v == 0)
    {
        cout << "Bob" << "\n";
    }
    else if (v < 0)
    {
        cout << "Alice" << "\n";
    }
    else
    {
        if (q > p)
        {
            cout << "Bob" << "\n";
        }
        else
        {
            cout << "Alice" << "\n";
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
