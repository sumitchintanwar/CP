#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || a[i] != a[i - 1])
        {
            while (j < n && p[j] != a[i])
            {
                j++;
            }
            if (j == n)
            {
                cout << "NO" << "\n";
                return;
            }
            j++;
        }
    }
    cout << "YES" << "\n";
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
