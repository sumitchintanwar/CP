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
        ll neg = 0;
        ll mini = LLONG_MAX;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += abs(a[i]);
            if (a[i] < 0)
            {
                neg++;
            }
            mini = min(mini, abs(a[i]));
        }

        if (neg % 2 == 0)
        {
            cout << sum << "\n";
        }
        else
        {
            cout << sum - 2 * mini << "\n";
        }
    }

    return 0;
}
