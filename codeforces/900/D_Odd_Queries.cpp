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
        ll n, q;
        cin >> n >> q;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }

        vector<ll> prefix(n + 1);
        prefix[0] = a[0];
        for (int i = 1; i <= n; i++)
        {
            prefix[i] = prefix[i - 1] + a[i - 1];
        }

        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;

            ll toSub = prefix[r] - prefix[l - 1];
            ll toAdd = k * (r - l + 1);
            ll newSum = sum - toSub + toAdd;
            if (newSum % 2 == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}
