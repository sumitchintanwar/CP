#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(ll val, int ind, int x, int day)
{
    // presum + number of items * number of increases
    if (val + (1LL * (ind + 1) * (day - 1)) <= x)
    {
        return true;
    }
    return false;
}

int bs(ll val, int ind, int x)
{
    int s = 1;
    int e = 1e9 + 5;
    int ans = 0;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (check(val, ind, x, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> cost(n);
        for (int i = 0; i < n; i++)
        {
            cin >> cost[i];
        }
        sort(cost.begin(), cost.end());

        vector<ll> presum(n);

        presum[0] = cost[0];
        for (int i = 1; i < n; i++)
        {
            presum[i] = presum[i - 1] + cost[i];
        }

        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += bs(presum[i], i, x);
        }

        cout << ans << "\n";
    }

    return 0;
}
