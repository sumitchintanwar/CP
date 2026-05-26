#include <bits/stdc++.h>
using namespace std;

using ll = long long;
// int solve(int ind, vector<ll> &a, vector<ll> &dp)
// {
//     int n = a.size();
//     if (ind == n)
//     {
//         return 0;
//     }
//     if (ind > n)
//     {
//         return 1e9;
//     }

//     if (dp[ind] != -1)
//     {
//         return dp[ind];
//     }

//     ll remove = 1 + solve(ind + 1, a, dp);

//     ll notRemove = 1e9;
//     if (ind + a[ind] + 1 <= n)
//     {
//         notRemove = solve(ind + a[ind] + 1, a, dp);
//     }
//     return dp[ind] = min(remove, notRemove);
// }
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
        for (int ind = 0; ind < n; ind++)
        {
            cin >> a[ind];
        }
        vector<ll> dp(n + 1, 1e9);
        dp[n] = 0;
        for (int ind = n - 1; ind >= 0; ind--)
        {
            ll remove = 1 + dp[ind + 1];

            ll notRemove = 1e9;
            if (ind + a[ind] + 1 <= n)
            {
                notRemove = dp[ind + a[ind] + 1];
            }
            dp[ind] = min(remove, notRemove);
        }
        cout << dp[0] << "\n";
    }

    return 0;
}
