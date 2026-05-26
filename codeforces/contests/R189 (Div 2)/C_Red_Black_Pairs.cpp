#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int solve(int i, int n, string &s, string &t, vector<ll> &dp)
{
    if (i == n)
    {
        return 0;
    }

    if (dp[i] != -1)
    {
        return dp[i];
    }

    int cost = (s[i] != t[i]) ? 1 : 0;
    int res = cost + solve(i + 1, n, s, t, dp);

    if (i + 1 < n)
    {
        int top = (s[i] != s[i + 1]) ? 1 : 0;
        int bottom = (t[i] != t[i + 1]) ? 1 : 0;
        int option2 = top + bottom + solve(i + 2, n, s, t, dp);

        res = min(res, option2);
    }

    return dp[i] = res;
}
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

        string s, t;
        cin >> s >> t;

        vector<ll> dp(n, -1);

        cout << solve(0, n, s, t, dp) << "\n";
    }

    return 0;
}
