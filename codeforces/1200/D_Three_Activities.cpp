#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<ll> solve(vector<ll> &nums)
{
    vector<pair<ll, ll>> temp(nums.size());

    for (int i = 0; i < temp.size(); i++)
    {
        temp[i].first = nums[i];
        temp[i].second = i;
    }

    sort(temp.rbegin(), temp.rend());

    vector<ll> res(3);
    for (int i = 0; i < 3; i++)
    {
        res[i] = temp[i].second;
    }
    return res;
}
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

        vector<ll> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<ll> c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        vector<ll> maxA = solve(a);
        vector<ll> maxB = solve(b);
        vector<ll> maxC = solve(c);
        ll res = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    ll x = maxA[i];
                    ll y = maxB[j];
                    ll z = maxC[k];

                    if ((x == y) || (y == z) || (z == x))
                    {
                        continue;
                    }

                    res = max(res, a[x] + b[y] + c[z]);
                }
            }
        }

        cout << res << "\n";
    }

    return 0;
}
