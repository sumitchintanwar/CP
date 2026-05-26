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
        ll n, x, y;
        cin >> n >> x >> y;

        ll odd = 0;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2)
            {
                odd++;
            }
        }

        ll alice = x % 2;
        ll temp = 0;
        if (odd % 2 == 0)
        {
            temp = alice;
        }
        else
        {
            temp = 1 - alice;
        }

        if (y % 2 == temp)
        {
            cout << "Alice" << "\n";
        }
        else
        {
            cout << "Bob" << "\n";
        }
    }

    return 0;
}
