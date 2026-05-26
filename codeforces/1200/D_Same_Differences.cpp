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

        // ARRAY INPUT
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<ll> b(n);
        for (int i = 0; i < n; i++)
        {
            b[i] = a[i] - i;
        }
        unordered_map<ll, ll> mpp;
        for (int i = 0; i < n; i++)
        {
            mpp[b[i]]++;
        }

        ll res = 0;

        for (auto &[el, cnt] : mpp)
        {
            res += (cnt * (cnt - 1)) / 2;
        }
        cout << res << "\n";
    }

    return 0;
}
