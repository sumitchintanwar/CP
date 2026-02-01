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

//         vector<ll> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         vector<int> res(n, 0);

//         for (int i = 0; i < n; i++)
//         {
//             ll score = a[i];
//             int cnt = 0;

//             multiset<pair<ll, int>> st;
//             for (int j = 0; j < n; j++)
//             {
//                 if (j != i)
//                 {
//                     st.insert({a[j], j});
//                 }
//             }

//             while (!st.empty())
//             {
//                 auto it = st.begin();
//                 if (it->first <= score)
//                 {
//                     score += it->first;
//                     cnt++;
//                     st.erase(it);
//                 }
//                 else
//                 {
//                     break;
//                 }
//             }

//             res[i] = cnt;
//         }

//         for (int i = 0; i < n; i++)
//         {
//             cout << res[i] << " ";
//         }
//         cout << "\n";
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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<pair<ll, ll>> temp(n);
        for (int i = 0; i < n; i++)
        {
            temp[i] = {a[i], i};
        }
        sort(temp.begin(), temp.end());
        vector<ll> prefix(n);
        prefix[0] = temp[0].first;
        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + temp[i].first;
        }
        vector<ll> reach(n);
        reach[n - 1] = n - 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (prefix[i] >= temp[i + 1].first)
            {
                reach[i] = reach[i + 1];
            }
            else
            {
                reach[i] = i;
            }
        }

        vector<ll> res(n);
        for (int i = 0; i < n; i++)
        {
            res[temp[i].second] = reach[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

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
//         ll a;
//         vector<pair<ll, ll>> b;

//         for (int i = 0; i < n; i++)
//         {
//             cin >> a;
//             b.push_back({a, i});
//         }

//         vector<ll> prefix(n);
//         sort(b.begin(), b.end());

//         prefix[0] = b[0].first;
//         for (int i = 1; i < n; i++)
//         {
//             prefix[i] = prefix[i - 1] + b[i].first;
//         }

//         vector<ll> res(n);

//         for (int i = 0; i < n; i++)
//         {
//             int j = i;
//             int found = i;
//             while (j < n)
//             {
//                 pair<ll, ll> temp = {prefix[j] + 1, INT_MIN};
//                 auto it = lower_bound(b.begin(), b.end(), temp);
//                 ll idx = it - b.begin();
//                 idx--;
//                 if (idx == j)
//                 {
//                     break;
//                 }
//                 found += idx - j;
//                 j = idx;
//             }
//             res[b[i].second] = found;
//         }

//         for (int i = 0; i < n; i++)
//         {
//             cout << res[i] << " ";
//         }
//         cout << endl;
//     }
// }