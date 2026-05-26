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
        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        ll res = 0;
        vector<ll> temp;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] >= i)
            {
                continue;
            }
            // number of elements in temp, that are less than a[i]
            res += (ll)(lower_bound(temp.begin(), temp.end(), a[i]) - temp.begin());
            temp.push_back(i);
        }
        cout << res << '\n';
    }

    return 0;
}
