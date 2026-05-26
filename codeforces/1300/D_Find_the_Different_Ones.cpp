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

        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        vector<ll> temp(n + 1);
        temp[1] = -1;
        for (int i = 2; i <= n; i++)
        {
            if (a[i] != a[i - 1])
            {
                temp[i] = i - 1;
            }
            else
            {
                temp[i] = temp[i - 1];
            }
        }

        ll q;
        cin >> q;
        while (q--)
        {
            ll l, r;
            cin >> l >> r;

            if (temp[r] >= l)
            {
                cout << temp[r] << " " << r << "\n";
            }
            else
            {
                cout << "-1" << " " << "-1" << "\n";
            }
        }
        cout << "\n";
    }

    return 0;
}
