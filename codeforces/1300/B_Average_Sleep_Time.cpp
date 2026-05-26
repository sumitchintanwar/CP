#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> temp(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            temp[i] = temp[i - 1] + a[i - 1];
        }

        ll sum = 0;

        for (int i = k; i <= n; i++)
        {
            sum += temp[i] - temp[i - k];
        }
        double res = (double)sum / (n - k + 1);
        cout << fixed << setprecision(10) << res << endl;
    }

    return 0;
}
