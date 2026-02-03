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

        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        vector<ll> p(n + 1, 0);
        vector<ll> s(n + 2, 0);

        for (int i = 1; i <= n; i++)
        {
            p[i] = p[i - 1] + a[i];
        }

        for (int i = n; i >= 1; i--)
        {
            s[i] = s[i + 1] + a[i];
        }

        ll i = 1;
        ll j = n;
        ll res = 0;

        while (i < j)
        {
            if (p[i] < s[j])
            {
                i++;
            }
            else if (p[i] > s[j])
            {
                j--;
            }
            else
            {
                res = i + (n - j + 1);
                i++;
                j--;
            }
        }

        cout << res << '\n';
    }

    return 0;
}