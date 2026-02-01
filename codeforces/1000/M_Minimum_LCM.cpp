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

        ll a = 1;
        ll b = n - 1;
        for (ll i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                a = n / i;
                b = n - a;
                break;
            }
        }
        cout << a << " " << b << "\n";
    }

    return 0;
}
