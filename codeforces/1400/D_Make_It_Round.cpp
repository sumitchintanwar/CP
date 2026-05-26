#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        ll c2 = 0;
        ll c5 = 0;

        ll temp = n;

        while (temp % 2 == 0)
        {
            c2++;
            temp = temp / 2;
        }

        while (temp % 5 == 0)
        {
            c5++;
            temp = temp / 5;
        }

        ll k = 1;

        while (c2 < c5 && k * 2 <= m)
        {
            k = k * 2;
            c2++;
        }

        while (c2 > c5 && k * 5 <= m)
        {
            k = k * 5;
            c5++;
        }

        while (k * 10 <= m)
        {
            k = k * 10;
        }
        k = k * (m / k);
        cout << n * k << "\n";
    }

    return 0;
}
