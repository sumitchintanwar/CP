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
        ll n, s, x;
        cin >> n >> s >> x;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll sum = accumulate(a.begin(), a.end(), 0);
        if (sum == s)
        {
            cout << "YES" << "\n";
            continue;
        }
        if (sum > s)
        {
            cout << "NO" << "\n";
            continue;
        }

        if ((s - sum) % x == 0)
        {
            cout << "YES" << "\n";
            continue;
        }
        else
        {
            cout << "NO" << "\n";
            continue;
        }
    }

    return 0;
}
