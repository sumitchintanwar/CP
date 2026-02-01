#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll xorTill(ll n)
{
    ll a = n % 4;
    if (a % 4 == 0)
    {
        return n;
    }
    else if (a % 4 == 1)
    {
        return 1;
    }
    else if (a % 4 == 2)
    {
        return n + 1;
    }
    else
    {
        return 0;
    }
}
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

        // ll totalXor = 0;
        // for (ll i = 0; i < a; i++)
        // {
        //     totalXor ^= i;
        // }
        ll totalXor = xorTill(a - 1);
        if (totalXor == b)
        {
            cout << a << "\n";
        }
        else if ((totalXor ^ b) != a)
        {
            cout << a + 1 << "\n";
        }
        else
        {
            cout << a + 2 << "\n";
        }
    }

    return 0;
}
