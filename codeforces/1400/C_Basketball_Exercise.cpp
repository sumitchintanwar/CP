#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// ll solve(ll ind, ll last, vector<ll> &h1, vector<ll> &h2, vector<vector<ll>> &dp)
// {
//     if (ind < 0)
//     {
//         return 0;
//     }
//     if (dp[ind][last] != -1)
//     {
//         return dp[ind][last];
//     }
//     ll res = solve(ind - 1, last, h1, h2, dp);

//     if (last != 0)
//     {
//         res = max(res, h1[ind] + solve(ind - 1, 0, h1, h2, dp));
//     }
//     if (last != 1)
//     {
//         res = max(res, h2[ind] + solve(ind - 1, 1, h1, h2, dp));
//     }
//     return dp[ind][last] = res;
// }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> h1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> h1[i];
        }

        vector<ll> h2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> h2[i];
        }

        // vector<vector<ll>> dp(n, vector<ll>(3, 0));
        vector<ll> prev(3);
        vector<ll> curr(3);
        for (int last = 0; last < 3; last++)
        {
            ll res = 0;

            if (last != 0)
            {
                res = max(res, h1[0]);
            }
            if (last != 1)
            {
                res = max(res, h2[0]);
            }
            prev[last] = res;
        }
        // ll res = solve(n - 1, 2, h1, h2, dp);
        for (int i = 1; i < n; i++)
        {
            for (int last = 0; last < 3; last++)
            {
                ll res = prev[last];

                if (last != 0)
                {
                    res = max(res, h1[i] + prev[0]);
                }
                if (last != 1)
                {
                    res = max(res, h2[i] + prev[1]);
                }
                curr[last] = res;
            }
            prev = curr;
        }
        ll res = prev[2];

        // max({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]});
        cout << res << "\n";
    }

    return 0;
}
