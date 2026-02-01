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
        for (int p = 1; p <= n; p++)
        {
            cin >> a[p];
        }

        vector<ll> b(n + 1);
        for (int q = 1; q <= n; q++)
        {
            cin >> b[q];
        }
        int i = 1;
        int j = n;
        while (i <= n && a[i] == b[i])
        {
            i++;
        }

        while (j > 0 && a[j] == b[j])
        {
            j--;
        }

        // ll maxi = LLONG_MIN;
        // ll mini = LLONG_MAX;
        // for (int k = i; k <= j; k++)
        // {
        //     mini = min(mini, a[k]);
        //     maxi = max(maxi, a[k]);
        // }

        while (i - 1 > 0 && a[i - 1] <= b[i])
        {
            i--;
        }
        while (j + 1 <= n && a[j + 1] >= b[j])
        {
            j++;
        }

        cout << i << " " << j << "\n";
    }

    return 0;
}
