// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         set<int> divi;
//         for (int i = 1; i < sqrt(n); i++)
//         {
//             if (n % i == 0)
//             {
//                 divi.insert(i);
//                 divi.insert(n / i);
//             }
//         }
//         int maxi = 1;
//         int curr = 1;

//         auto it = divi.begin();
//         auto prev = it++;
//         for (; it != divi.end(); ++it, ++prev)
//         {
//             if (*it == *prev + 1)
//             {
//                 curr++;
//             }
//             else
//             {
//                 curr = 1;
//             }
//             maxi = max(maxi, curr);
//         }

//         cout << maxi << endl;
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
        int i = 1;
        while (n % i == 0)
        {
            i++;
        }
        cout << i - 1<< endl;
    }

    return 0;
}
