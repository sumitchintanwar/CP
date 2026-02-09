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

        vector<ll> x(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        vector<ll> y(n);
        for (int i = 0; i < n; i++)
        {
            cin >> y[i];
        }

        vector<ll> diff(n);
        for (int i = 0; i < n; i++)
        {
            diff[i] = y[i] - x[i];
        }
        sort(diff.begin(), diff.end());
        int i = 0;
        int j = n - 1;
        ll cnt = 0;
        while (i < j)
        {
            if (diff[i] + diff[j] >= 0)
            {
                cnt++;
                i++;
                j--;
            }
            else
            {
                i++;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}
