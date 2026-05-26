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
        bool flag = false;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                ll k = n / i;
                cout << k << " " << n - k << "\n";
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            cout << 1 << " " << n - 1 << "\n";
        }
    }

    return 0;
}
