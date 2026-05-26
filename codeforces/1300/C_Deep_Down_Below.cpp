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

        // vector<ll> a(n);
        vector<pair<ll, ll>> temp;
        for (int i = 0; i < n; i++)
        {
            ll k;
            cin >> k;
            ll need = 0;
            for (int j = 1; j <= k; j++)
            {
                ll m;
                cin >> m;

                need = max(need, m - j + 1);
            }
            need++;
            temp.push_back({need, k});
        }
        sort(temp.begin(), temp.end());
        ll res = 0;
        ll increase = 0;

        for (auto [need, k] : temp)
        {
            res = max(res, need - increase);
            increase += k;
        }
        // vector<ll> res;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << res[i] << " ";
        // }
        cout << res << "\n";
    }

    return 0;
}
