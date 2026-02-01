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

//         if (n == 1)
//         {
//             cout << '0' << endl;
//             continue;
//         }
//         vector<ll> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         unordered_map<ll, ll> mpp;
//         for (int i = 0; i < n; i++)
//         {
//             mpp[a[i]]++;
//         }
//         ll maxCount = 0;

//         for (auto &it : mpp)
//         {
//             maxCount = max(maxCount, it.second);
//         }

//         ll ans = 0;
//         ll curr = maxCount;
//         while (curr < n)
//         {
//             ans++;
//             curr = curr * 2;
//         }
//         ans += n - maxCount;
//         cout << ans << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        unordered_map<long long, int> freq;
        int maxCount = 0;

        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            freq[x]++;
            maxCount = max(maxCount, freq[x]);
        }

        if (maxCount == n)
        {
            cout << 0 << '\n';
            continue;
        }

        int ans = 0;
        int curr = maxCount;

        ans += n - maxCount;
        while (curr < n)
        {
            curr *= 2;
            ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}
