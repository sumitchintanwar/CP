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

        int diff = -1;

        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[0])
            {
                diff = i;
                break;
            }
        }

        if (diff == -1)
        {
            cout << "NO" << "\n";
            continue;
        }

        cout << "YES" << "\n";

        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[0])
            {
                cout << 1 << " " << i + 1 << "\n";
            }
        }

        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[0])
            {
                cout << diff + 1 << " " << i + 1 << "\n";
            }
        }
    }

    return 0;
}
