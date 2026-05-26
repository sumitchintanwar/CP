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

        ll res = 1;
        ll temp = n;
        for (int i = 2; i * i <= temp; i++)
        {
            if (temp % i == 0)
            {
                res = res * i;
                while (temp % i == 0)
                {
                    temp = temp / i;
                }
            }
        }

        if (temp > 1)
        {
            res = res * temp;
        }

        cout << res << "\n";
    }

    return 0;
}
