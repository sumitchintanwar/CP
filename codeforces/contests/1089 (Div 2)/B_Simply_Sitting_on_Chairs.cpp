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

        ll cnt = 0;
        vector<ll> p(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
            if (p[i] <= i)
            {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}
