// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// ll solve(ll ind, ll target, vector<ll> &a)
// {
//     if (ind < 0)
//     {
//         return (target == 0);
//     }

//     ll notPick = solve(ind - 1, target, a);

//     ll pick = 0;
//     if (target >= a[ind])
//     {
//         pick = solve(ind - 1, target - a[ind], a);
//     }

//     return pick + notPick;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;

//     while (t--)
//     {
//         ll n;
//         cin >> n;

//         vector<ll> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         ll sum = accumulate(a.begin(), a.end(), 0LL);
//         ll target = sum - 1;

//         ll res = solve(n - 1, target, a);
//         cout << res << '\n';
//     }

//     return 0;
// }

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

        vector<ll> a(n);
        ll zero = 0;
        ll one = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                zero++;
            }
            if (a[i] == 1)
            {
                one++;
            }
        }

        ll res = pow(2, zero) * one;
        cout << res << endl;
    }

    return 0;
}
