#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        string s;
        cin >> s;
        ll n1 = 0;
        ll n2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '+')
            {
                n1++;
            }
            else
            {
                n2++;
            }
        }
        ll q;
        cin >> q;

        while (q--)
        {
            ll a, b;
            cin >> a >> b;

            if (a == b)
            {
                if (n1 == n2)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
                continue;
            }
            ll nume = b * (n2 - n1);

            if (nume % (a - b) == 0)
            {
                ll k = nume / (a - b);
                if (k <= n1 && k >= -n2)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}