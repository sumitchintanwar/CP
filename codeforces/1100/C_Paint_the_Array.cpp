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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll gcd1 = 0; // odd
        ll gcd2 = 0; // even

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                gcd2 = gcd(gcd2, a[i]);
            }
            else
            {
                gcd1 = gcd(gcd1, a[i]);
            }
        }
        bool flag = true;
        for (int i = 1; i < n; i += 2)
        {
            if (a[i] % gcd2 == 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << gcd2 << "\n";
            continue;
        }
        flag = true;
        for (int i = 0; i < n; i += 2)
        {
            if (a[i] % gcd1 == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << gcd1 << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }

    return 0;
}
