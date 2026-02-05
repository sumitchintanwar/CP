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
        ll n, k;
        cin >> n >> k;

        vector<ll> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        ll cnt = 0;
        ll mini = INT_MAX;
        ll maxi = INT_MIN;

        for (int j = 0; j < n; j++)
        {
            mini = min(mini, p[j]);
            maxi = max(maxi, p[j]);

            if (p[j] - mini > k)
            {
                cnt++;
                mini = INT_MAX;
                maxi = INT_MIN;
            }
            else if (maxi - p[j] > k)
            {
                cnt++;
                mini = INT_MAX;
                maxi = INT_MIN;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}