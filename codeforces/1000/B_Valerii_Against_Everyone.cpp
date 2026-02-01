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

//         vector<ll> b(n);
//         bool flag = false;
//         unordered_map<int, int> mpp;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> b[i];
//             mpp[b[i]]++;

//             if (mpp[b[i]] > 1)
//             {
//                 flag = true;
//                 cout << "YES" << "\n";
//                 continue;
//             }
//         }

//         if (!flag)
//         {
//             cout << "NO" << "\n";
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         ll n;
//         cin >> n;

//         vector<ll> b(n);
//         for (ll i = 0; i < n; i++)
//         {
//             cin >> b[i];
//         }

//         unordered_set<ll> s;
//         for (ll i = 0; i < n; i++)
//         {
//             s.insert(b[i]);
//         }

//         if (s.size() < n)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
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

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        unordered_map<ll, ll> mpp;
        bool flag = false;

        for (ll i = 0; i < n; i++)
        {
            if (mpp.find(b[i]) != mpp.end())
            {
                flag = true;
                break;
            }
            mpp[b[i]] = 1;
        }

        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
