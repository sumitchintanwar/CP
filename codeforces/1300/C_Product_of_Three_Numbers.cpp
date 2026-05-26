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
        vector<ll> factors;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                factors.push_back(i);
                n = n / i;
            }

            if (factors.size() == 2)
            {
                break;
            }
        }

        if (n == 1 || factors.size() < 2 || n == factors[0] || n == factors[1])
        {
            cout << "NO" << "\n";
        }

        else
        {
            cout << "YES" << "\n";
            cout << factors[0] << " " << factors[1] << " " << n << "\n";
        }
    }

    return 0;
}
