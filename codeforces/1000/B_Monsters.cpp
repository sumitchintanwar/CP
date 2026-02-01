// #include <bits/stdc++.h>
// using namespace std;

// using ll =ll;
// struct Compare
// {
//     bool operator()(const pair<ll, ll> &a, const pair<ll, ll> &b) const
//     {
//         if (a.first != b.first)
//         {
//             return a.first < b.first;
//         }
//         return a.second > b.second;
//     }
// };

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
//         priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, Compare> pq;

//         /*
//         priority_queue<
//             pair<ll, ll>,
//             vector<pair<ll, ll>>,
//             function<bool(pair<ll, ll>, pair<ll, ll>)>>
//             pq(
//                 [](pair<ll, ll> a, pair<ll, ll> b)
//                 {
//                     if (a.first != b.first)
//                         return a.first < b.first; // max by first
//                     return a.second > b.second;   // min by second
//                 });
//         */

//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             pq.push({a[i], i + 1});
//         }
//         vector<ll> res;
//         while (!pq.empty())
//         {
//             ll maxi = pq.top().first;
//             ll ind = pq.top().second;
//             pq.pop();
//             if (maxi <= k)
//             {
//                 res.push_back(ind);
//             }
//             else
//             {
//                 maxi -= k;
//                 pq.push({maxi, ind});
//             }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cout << res[i] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<pair<ll, ll>> points(n);
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            points[i] = {x, i + 1};
        }

        for (ll i = 0; i < n; i++)
        {
            points[i].first = points[i].first % k;
            if (points[i].first == 0)
            {
                points[i].first = k;
            }
        }

        sort(points.begin(), points.end(),
             [&](pair<ll, ll> a, pair<ll, ll> b)
             {
                 if (a.first != b.first)
                 {
                     return a.first > b.first;
                 }
                 return a.second < b.second;
             });

        for (auto it : points)
        {
            cout << it.second << " ";
        }
        cout << endl;
    }
    return 0;
}
