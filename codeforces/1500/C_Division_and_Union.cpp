#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n;
    cin >> n;

    vector<vector<ll>> a(n);
    for (int i = 0; i < n; i++)
    {
        ll l, r;
        cin >> l >> r;
        a[i] = {l, r, i};
    }

    sort(a.begin(), a.end());

    vector<ll> res(n, 2);
    ll maxi = a[0][1];
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        if (a[i][0] > maxi)
        {
            flag = true;
            break;
        }
        res[a[i][2]] = 1;
        maxi = max(maxi, a[i][1]);
    }

    if (!flag)
    {
        cout << "-1" << "\n";
    }
    else
    {
        for (auto v : res)
        {
            cout << v << ' ';
        }
        cout << '\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
