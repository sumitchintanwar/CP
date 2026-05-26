// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;

// // ll solve(ll ind, ll last, ll n, vector<ll> &s, vector<vector<ll>> &dp)
// // {
// //     if (ind < 0)
// //     {
// //         return 0;
// //     }
// //     if (dp[ind][last] != -1)
// //     {
// //         return dp[ind][last];
// //     }
// //     bool canTake = false;

// //     ll notPick = solve(ind - 1, last, n, s, dp);
// //     if (last == n || ((last + 1) % (ind + 1) == 0 && s[last] > s[ind]))
// //     {
// //         canTake = true;
// //     }
// //     ll pick = LLONG_MIN;
// //     if (canTake)
// //     {
// //         pick = 1 + solve(ind - 1, ind, n, s, dp);
// //     }
// //     return dp[ind][last] = max(pick, notPick);
// // }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t = 1;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;

//         vector<ll> s(n);
//         for (int ind = 0; ind < n; ind++)
//         {
//             cin >> s[ind];
//         }

//         // vector<vector<ll>> dp(n, vector<ll>(n + 1, 0));
//         // ll res = solve(n - 1, n, n, s, dp);
//         vector<ll> prev(n + 1, 0);
//         vector<ll> curr(n + 1, 0);
//         for (int ind = 0; ind < n; ind++)
//         {
//             for (int last = 0; last <= n; last++)
//             {
//                 bool canTake = false;
//                 ll notPick = (ind == 0) ? 0 : prev[last];
//                 if (last == n || ((last + 1) % (ind + 1) == 0 && s[last] > s[ind]))
//                 {
//                     canTake = true;
//                 }
//                 ll pick = LLONG_MIN;
//                 if (canTake)
//                 {
//                     pick = 1 + ((ind == 0) ? 0 : prev[ind]);
//                 }
//                 curr[last] = max(pick, notPick);
//             }
//             prev = curr;
//         }
//         cout << prev[n] << "\n";
//     }

//     return 0;
// }

// // #include <bits/stdc++.h>
// // using namespace std;

// // using ll = long long;

// // int main()
// // {
// //     ios::sync_with_stdio(false);
// //     cin.tie(nullptr);

// //     ll t = 1;
// //     cin >> t;
// //     while (t--)
// //     {
// //         ll n;
// //         cin >> n;

// //         vector<ll> s(n + 1);
// //         for (int ind = 1; ind <= n; ind++)
// //         {
// //             cin >> s[ind];
// //         }

// //         ll res = 1;
// //         for (int ind = 1; ind <= n; ind++)
// //         {
// //             ll last = s[ind];
// //             ll curr = 1;
// //             for (int j = 2 * ind; j <= n; j += ind)
// //             {
// //                 if (s[j] > last)
// //                 {
// //                     curr++;
// //                     last = s[j];
// //                 }
// //             }
// //             res = max(res, curr);
// //         }

// //         cout << res << "\n";
// //     }

// //     return 0;
// // }

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

        vector<ll> s(n + 1);
        for (ll i = 1; i <= n; i++)
        {
            cin >> s[i];
        }

        vector<ll> dp(n + 1, 1);

        ll res = 1;

        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 2 * i; j <= n; j += i)
            {
                if (s[j] > s[i])
                {
                    dp[j] = max(dp[j], dp[i] + 1);
                }
            }
            res = max(res, dp[i]);
        }

        cout << res << "\n";
    }

    return 0;
}