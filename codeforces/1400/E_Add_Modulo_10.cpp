// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;
// bool isOk(vector<ll> a)
// {
//     int n = a.size();
//     for (int i = 1; i < n; i++)
//     {
//         if (a[i] != a[0])
//         {
//             return false;
//         }
//     }
//     return true;
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
//         bool hasZero = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             if (a[i] % 2 == 1)
//             {
//                 a[i] += a[i] % 10;
//             }
//             if (a[i] % 10 == 0)
//             {
//                 hasZero = true;
//             }
//         }
//         if (hasZero)
//         {
//             if (isOk(a))
//             {
//                 cout << "Yes" << "\n";
//             }
//             else
//             {
//                 cout << "No" << "\n";
//             }
//             continue;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             while (a[i] % 10 != 2)
//             {
//                 a[i] += a[i] % 10;
//             }
//             a[i] = a[i] % 20;
//         }

//         if (isOk(a))
//         {
//             cout << "Yes" << "\n";
//         }
//         else
//         {
//             cout << "No" << "\n";
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
        ll n;
        cin >> n;

        vector<ll> a(n);
        bool hasZero = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 1)
            {
                a[i] += a[i] % 10;
            }
            if (a[i] % 10 == 0)
            {
                hasZero = true;
            }
        }

        if (hasZero)
        {
            if (count(a.begin(), a.end(), a[0]) == n)
            {
                cout << "Yes" << "\n";
            }
            else
            {
                cout << "No" << "\n";
            }
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            while (a[i] % 10 != 2)
            {
                a[i] += a[i] % 10;
            }
            a[i] = a[i] % 20;
        }

        if (count(a.begin(), a.end(), a[0]) == n)
        {
            cout << "Yes" << "\n";
        }
        else
        {
            cout << "No" << "\n";
        }
    }

    return 0;
}