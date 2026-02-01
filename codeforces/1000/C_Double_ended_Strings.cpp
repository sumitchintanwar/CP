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
        string a;
        cin >> a;

        string b;
        cin >> b;

        ll n = a.size();
        ll m = b.size();

        ll lcs = 0;
        for (ll i = 1; i <= min(n, m); i++)
        {

            for (ll j = 0; j + i <= n; j++)
            {
                for (ll k = 0; k + i <= m; k++)
                {
                    string newA = a.substr(j, i);
                    string newB = b.substr(k, i);

                    if (newA == newB)
                    {
                        lcs = max(lcs, i);
                    }
                }
            }
        }
        cout << n + m - 2 * lcs << "\n";
    }

    return 0;
}
