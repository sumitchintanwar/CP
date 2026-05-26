#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        // ARRAY INPUT
        vector<ll> u(n);
        for (int i = 0; i < n; i++)
        {
            cin >> u[i];
        }

        vector<ll> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        vector<vector<ll>> temp(n + 1);

        for (int i = 0; i < n; i++)
        {
            temp[u[i]].push_back(s[i]);
        }

        vector<ll> res(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            if (temp[i].empty())
            {
                continue;
            }

            auto &v = temp[i];
            sort(v.rbegin(), v.rend());
            ll size = v.size();
            vector<ll> pref(size + 1, 0);
            for (int j = 1; j <= size; j++)
            {
                pref[j] = pref[j - 1] + v[j - 1];
            }

            for (int k = 1; k <= size; k++)
            {
                ll groups = (size / k) * k;

                if (groups == 0)
                {
                    break;
                }
                res[k] += pref[groups];
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << res[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
