#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{

    ll n;
    cin >> n;

    vector<vector<ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        ll l, r;
        cin >> l >> r;
        a[i] = {l, r, i + 1};
    }

    sort(a.begin(), a.end(), [&](vector<ll> &v1, vector<ll> &v2)
         {
				if (v1[0] == v2[0]) {
                    return v1[1] > v2[1];
                }
                return v1[0] < v2[0]; });

    ll maxi = a[0][1];
    ll ind = a[0][2];
    for (ll i = 1; i < n; i++)
    {
        if (maxi >= a[i][1])
        {
            cout << a[i][2] << ' ' << ind << '\n';
            return;
        }
        if (a[i][1] > maxi)
        {
            maxi = a[i][1];
            ind = a[i][2];
        }
    }
    cout << "-1" << " " << "-1" << "\n";
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
