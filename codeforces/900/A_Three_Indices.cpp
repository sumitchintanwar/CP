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
//         ll n;
//         cin >> n;

//         vector<ll> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         int maxi = n;
//         if (a[0] == maxi || a[n - 1] == maxi)
//         {
//             cout << "NO" << endl;
//         }
//         else
//         {
//             cout << "YES" << endl;
//             for (int j = 1; j < n - 1; j++)
//             {
//                 if (a[j] == n)
//                 {
//                     cout << "1" << " " << j + 1<< " " << n << endl;
//                     break;
//                 }
//             }
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool found = false;

        for (int j = 1; j < n - 1 && !found; j++)
        {
            int i = -1, k = -1;

            for (int s = 0; s < j; s++)
            {
                if (a[s] < a[j])
                {
                    i = s;
                    break;
                }
            }

            for (int e = j + 1; e < n; e++)
            {
                if (a[e] < a[j])
                {
                    k = e;
                    break;
                }
            }

            if (i != -1 && k != -1)
            {
                cout << "YES\n";
                cout << i + 1 << " " << j + 1 << " " << k + 1 << "\n";
                found = true;
            }
        }

        if (!found)
        {
            cout << "NO\n";
        }
    }

    return 0;
}
