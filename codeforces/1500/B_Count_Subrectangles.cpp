#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{

    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<ll> b(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    vector<ll> tempA(n + 1, 0), tempB(m + 1, 0);

    ll curr = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            curr++;
            tempA[curr]++;
        }
        else
        {
            curr = 0;
        }
    }

    curr = 0;
    for (ll i = 0; i < m; i++)
    {
        if (b[i] == 1)
        {
            curr++;
            tempB[curr]++;
        }
        else
        {
            curr = 0;
        }
    }

    for (ll i = n - 1; i > 0; i--)
    {
        tempA[i] += tempA[i + 1];
    }
    for (ll i = m - 1; i > 0; i--)
    {
        tempB[i] += tempB[i + 1];
    }

    ll res = 0;
    for (ll i = 1; i * i <= k; i++)
    {
        if (k % i == 0)
        {
            ll j = k / i;
            if (i <= n && j <= m)
            {
                res += tempA[i] * tempB[j];
            }
            if (i != j && j <= n && i <= m)
            {
                res += tempA[j] * tempB[i];
            }
        }
    }

    cout << res << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
