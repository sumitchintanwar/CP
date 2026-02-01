#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool fair(ll n)
{
    ll num = n;
    while (num != 0)
    {
        ll x = num % 10;

        if (x != 0 && n % x != 0)
        {
            return false;
        }
        num /= 10;
    }
    return true;
}
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

        while (!fair(n))
        {
            n++;
        }

        cout << n << endl;
    }

    return 0;
}