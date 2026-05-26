#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll digits(ll num)
{
    ll cnt = 0;
    while (num)
    {
        cnt++;
        num /= 10;
    }
    return cnt;
}

ll trailingZeros(ll num)
{
    ll cnt = 0;
    while (num % 10 == 0)
    {
        cnt++;
        num /= 10;
    }
    return cnt;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        vector<ll> a(n);
        vector<ll> zeros;
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total += digits(a[i]);
            zeros.push_back(trailingZeros(a[i]));
        }
        sort(zeros.rbegin(), zeros.rend());

        ll reduce = 0;
        for (int i = 0; i < n; i += 2)
        {
            reduce += zeros[i];
        }

        ll final = total - reduce;

        if (final <= m)
        {
            cout << "Anna" << "\n";
        }
        else
        {
            cout << "Sasha" << "\n";
        }
    }

    return 0;
}
