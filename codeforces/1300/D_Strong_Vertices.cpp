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

        vector<ll> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<ll> diff(n);

        ll maxi = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            diff[i] = a[i] - b[i];
            maxi = max(maxi, diff[i]);
        }

        vector<ll> res;
        for (int i = 0; i < n; i++)
        {
            if (diff[i] == maxi)
            {
                res.push_back(i + 1);
            }
        }
        cout << res.size() << "\n";
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
