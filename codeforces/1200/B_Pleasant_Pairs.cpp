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
        vector<pair<ll, ll>> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i + 1;
        }

        sort(a.begin(), a.end());
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i].first * a[j].first >= 2 * n)
                {
                    break;
                }
                if (a[i].first * a[j].first == a[i].second + a[j].second)
                {
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}
