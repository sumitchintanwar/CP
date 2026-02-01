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
        ll n, x;
        cin >> n >> x;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll maxi = 0;
        ll mini = 0;

        for (int i = 0; i < n; i++)
        {
            maxi += (a[i] + x - 1) / x;

            mini += a[i];
        }
        mini = (mini + x - 1) / x;

        cout << mini << " " << maxi << "\n";
    }

    return 0;
}
