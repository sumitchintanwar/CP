#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll solve(ll ind, ll turn, vector<ll> &a, vector<vector<ll>> &dp)
{
    int n = a.size();
    if (ind >= n)
    {
        return 0;
    }

    if (dp[ind][turn] != -1)
    {
        return dp[ind][turn];
    }

    ll res = 1e9;

    if (turn == 0)
    {
        res = min(res, a[ind] + solve(ind + 1, 1, a, dp));
        if (ind + 1 < n)
        {
            res = min(res, a[ind] + a[ind + 1] + solve(ind + 2, 1, a, dp));
        }
    }
    else
    {
        res = min(res, solve(ind + 1, 0, a, dp));
        if (ind + 1 < n)
        {
            res = min(res, solve(ind + 2, 0, a, dp));
        }
    }

    return dp[ind][turn] = res;
}

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

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<vector<ll>> dp(n, vector<ll>(2, -1));

        cout << solve(0, 0, a, dp) << "\n";
    }

    return 0;
}