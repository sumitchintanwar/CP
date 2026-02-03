// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, k;
//         cin >> n >> k;

//         vector<ll> a(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         map<ll, bool> mpp;

//         for (int i = 0; i < n; i++)
//         {
//             mpp[a[i]] = true;
//         }
//         bool flag = false;
//         for (int i = 0; i < n; i++)
//         {
//             if (mpp.find(a[i] - k) != mpp.end())
//             {
//                 flag = true;
//                 break;
//             }
//         }

//         if (flag)
//         {
//             cout << "YES" << "\n";
//         }
//         else
//         {
//             cout << "NO" << "\n";
//         }
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
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        ll i = 0;
        ll j = 1;
        bool flag = false;

        while (i < n && j < n)
        {
            if (i == j)
            {
                j++;
                continue;
            }

            ll diff = a[j] - a[i];

            if (diff == k)
            {
                flag = true;
                break;
            }
            else if (diff < k)
            {
                j++;
            }
            else
            {
                i++;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
