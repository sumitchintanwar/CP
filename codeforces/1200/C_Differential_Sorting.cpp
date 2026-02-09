#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
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

        if (a[n - 2] > a[n - 1])
        {
            cout << "-1\n";
            continue;
        }
        else if (a[n - 1] >= 0)
        {
            cout << n - 2 << "\n";
            for (int i = 1; i <= n - 2; i++)
            {
                cout << i << " " << n - 1 << " " << n << "\n";
            }
        }
        else
        {
            if (is_sorted(a.begin(), a.end()))
            {
                cout << "0\n";
            }
            else
            {
                cout << "-1\n";
            }
        }
    }

    return 0;
}
