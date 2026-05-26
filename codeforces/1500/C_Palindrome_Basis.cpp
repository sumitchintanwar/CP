#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int MOD = 1e9 + 7;

bool isPalindrome(int n)
{
    int original = n;
    int reversed = 0;
    while (n > 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}
// int solve(int idx, int rem, vector<ll> &palindromes, vector<vector<ll>> &dp)
// {
//     if (rem == 0)
//     {
//         return 1;
//     }
//     if (idx < 0 || rem < 0)
//     {
//         return 0;
//     }

//     if (dp[idx][rem] != -1)
//     {
//         return dp[idx][rem];
//     }

//     ll notTake = solve(idx - 1, rem, palindromes, dp);
//     ll take = 0;
//     if (rem >= palindromes[idx])
//     {
//         take = solve(idx, rem - palindromes[idx], palindromes, dp);
//     }
//     return dp[idx][rem] = take + notTake;
// }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    cin >> t;
    vector<ll> palindromes;
    for (int i = 1; i <= 40000; i++)
    {
        if (isPalindrome(i))
        {
            palindromes.push_back(i);
        }
    }

    ll size = palindromes.size();
    vector<vector<ll>> dp(size, vector<ll>(40001, 0));
    for (int i = 0; i < size; i++)
    {
        dp[i][0] = 1;
    }
    for (int idx = 0; idx < size; idx++)
    {
        for (int rem = 1; rem <= 40000; rem++)
        {

            ll notTake = 0;
            if (idx - 1 >= 0)
            {
                notTake = dp[idx - 1][rem];
            }
            ll take = 0;
            if (rem >= palindromes[idx])
            {
                take = dp[idx][rem - palindromes[idx]];
            }
            dp[idx][rem] = (take + notTake) % MOD;
        }
    }
    while (t--)
    {
        ll n;
        cin >> n;

        cout << dp[size - 1][n] << "\n";
    }
    return 0;
}
