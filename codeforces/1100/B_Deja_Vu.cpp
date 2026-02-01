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
        ll n, q;
        cin >> n >> q;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<ll> b(q);
        for (int i = 0; i < q; i++)
        {
            cin >> b[i];
        }
        ll mini = 31;
        for (int i = 0; i < q; i++)
        {
            if (mini <= b[i])
            {
                continue;
            }
            ll val = pow(2, b[i]);
            for (int j = 0; j < n; j++)
            {
                if (a[j] % val == 0)
                {
                    a[j] += val / 2;
                }
            }
            mini = b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
