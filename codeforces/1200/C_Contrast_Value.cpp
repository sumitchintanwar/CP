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

        if (n == 1)
        {
            cout << 1 << "\n";
            continue;
        }

        ll cnt = 0;
        ll dir = 0;
        // 0 = unknown, 1 = increasing, -1 = decreasing

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] < a[i + 1])
            {
                if (dir != 1)
                {
                    cnt++;
                    dir = 1;
                }
            }
            else if (a[i] > a[i + 1])
            {
                if (dir != -1)
                {
                    cnt++;
                    dir = -1;
                }
            }
        }

        cout << cnt + 1 << "\n";
    }

    return 0;
}
