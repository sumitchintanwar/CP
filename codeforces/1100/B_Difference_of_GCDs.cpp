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
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> res;
        bool printed = false;
        for (int i = 1; i <= n; i++)
        {
            ll temp = ((l + i - 1) / i) * i;
            if (temp > r)
            {
                cout << "NO" << endl;
                printed = true;
                break;
            }
            res.push_back(temp);
        }
        if (!printed)
        {
            cout << "YES\n";
            for (auto a : res)
            {
                cout << a << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
