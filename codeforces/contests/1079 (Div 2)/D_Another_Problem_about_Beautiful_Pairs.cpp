#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] * a[j] == j - i)
            {
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
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
