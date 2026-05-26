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
        ll p, q;
        cin >> p >> q;
        bool flag = false;
        ll k = 2 * (p + 2 * q) + 1;
        for (int i = 3; i * i <= k; i++)
        {
            if (k % i == 0)
            {
                ll n = (i - 1) / 2;
                ll m = ((k / i) - 1) / 2; 

                if (q <= n * m + m && q <= n * m + n)
                {
                    cout << n << " ";
                    cout << m << "\n";
                    flag = true;
                    break;
                }
            }
        }
        if (!flag)
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}
