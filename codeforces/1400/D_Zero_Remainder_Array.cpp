#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // vector<ll> mods;
        unordered_map<int, int> mpp;
        for (int x : a)
        {
            int next = ((x + k - 1) / k) * k;
            int temp = next - x;
            if (temp != 0)
            {
                mpp[temp]++;
            }
        }
        ll res = 0;
        for (auto [el, cnt] : mpp)
        {
            ll curr = el + (cnt - 1) * k + 1;
            res = max(res, curr);
        }
        cout << res << "\n";
    }

    return 0;
}
