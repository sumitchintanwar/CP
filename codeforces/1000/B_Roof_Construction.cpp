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
        n--;
        ll msb = log2(n);
        ll num = pow(2, msb) - 1;
        vector<ll> res;
        while (num >= 0)
        {
            res.push_back(num--);
        }

        num = pow(2, msb);

        while (num <= n)
        {
            res.push_back(num++);
        }

        for (int i = 0; i <= n; i++)
        {
            cout << res[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
