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
        ll a, b;
        cin >> a >> b;
        if (b > a)
        {
            swap(a, b);
        }
        if (a == b)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            ll gcd = a - b;
            ll res = min(b % gcd, gcd - (b % gcd));
            cout << gcd << " " << res << endl;
        }
    }

    return 0;
}
