#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        vector<vector<ll>> a(n, vector<ll>(m));
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        ll neg = 0;
        ll mini = INT_MAX;
        ll res = 0;

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (a[i][j] < 0)
                {
                    neg++;
                }
                mini = min(mini, abs(a[i][j]));
                res += abs(a[i][j]);
            }
        }

        if (neg % 2 == 0)
        {
            cout << res << endl;
        }
        else
        {
            cout << res - 2 * abs(mini) << endl;
        }
    }
}
