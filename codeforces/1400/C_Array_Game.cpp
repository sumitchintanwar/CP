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
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (k > 2)
        {
            cout << "0" << "\n";
            continue;
        }
        vector<ll> diff;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                diff.push_back(abs(a[i] - a[j]));
            }
        }
        ll res = LLONG_MAX;
        sort(diff.begin(), diff.end());
        for (int i = 0; i < n; i++)
        {
            res = min(res, a[i]);
        }

        res = min(res, diff[0]);
        if (k == 2)
        {

            for (int i = 0; i < n; i++)
            {
                auto it = lower_bound(diff.begin(), diff.end(), a[i]);
                if (it != diff.end())
                {
                    res = min(res, abs(*it - a[i]));
                }

                if (it != diff.begin())
                {
                    it--;
                    res = min(res, abs(*it - a[i]));
                }
            }
        }
        cout << res << "\n";
    }

    return 0;
}
