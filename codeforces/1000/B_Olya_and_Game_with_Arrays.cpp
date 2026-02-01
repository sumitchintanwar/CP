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
        ll size = n;
        ll mini = INT_MAX;
        vector<ll> second;
        while (n--)
        {
            ll m;
            cin >> m;

            vector<ll> a(m);
            for (int i = 0; i < m; i++)
            {
                cin >> a[i];
            }
            sort(a.begin(), a.end());
            mini = min(mini, a[0]);
            second.push_back(a[1]);
        }
        sort(second.begin(), second.end(), greater<int>());
        ll res = mini;
        for (ll i = 0; i < size - 1; i++)
        {
            res += second[i];
        }

        cout << res << endl;
    }

    return 0;
}
