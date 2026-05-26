#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isOK(ll val, ll nbr)
{
    if (nbr == 0)
    {
        return true;
    }
    if (val + nbr == 7)
    {
        return false;
    }
    if (val == nbr)
    {
        return false;
    }
    return true;
}
// int solve(ll ind, ll nbr, vector<vector<ll>> &dp, vector<ll> &a)
// {
//     if (ind < 0)
//     {
//         return 0;
//     }
//     if (dp[ind][nbr] != -1)
//     {
//         return dp[ind][nbr];
//     }
//     ll mini = INT_MAX;
//     for (int val = 1; val <= 6; val++)
//     {
//         if (isOK(val, nbr))
//         {
//             ll ops = (a[ind] != val) + solve(ind - 1, val, dp, a);
//             mini = min(mini, ops);
//         }
//     }
//     return dp[ind][nbr] = mini;
// }
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

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<vector<ll>> dp(n + 1, vector<ll>(7, 0));

        // int res = solve(n - 1, 0, dp, a);
        ll mini = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= 6; j++)
            {
                ll mini = INT_MAX;
                for (int val = 1; val <= 6; val++)
                {
                    if (isOK(val, j))
                    {
                        ll ops = (a[i] != val) ? 1 : 0;
                        if (i > 0)
                        {
                            ops += dp[i - 1][val];
                        }
                        mini = min(mini, ops);
                    }
                }
                dp[i][j] = mini;
            }
        }
        cout << dp[n - 1][0] << "\n";
    }

    return 0;
}
