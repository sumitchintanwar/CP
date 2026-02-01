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

        vector<pair<ll, bool>> nums;
        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            nums.push_back({a[i], flag});
            flag = !flag;
        }

        sort(nums.begin(), nums.end());

        bool ans = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i].second == nums[i + 1].second)
            {
                ans = false;
                break;
            }
        }

        cout << (ans ? "YES\n" : "NO\n");
    }
    return 0;
}
