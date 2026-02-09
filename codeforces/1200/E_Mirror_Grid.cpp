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

        vector<vector<char>> a(n, vector<char>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }

        ll res = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int zero = 0;
                int one = 0;

                if (a[i][j] == '1')
                {
                    one++;
                }
                else
                {
                    zero++;
                }

                if (a[n - j - 1][i] == '1')
                {
                    one++;
                }
                else
                {
                    zero++;
                }

                if (a[j][n - i - 1] == '1')
                {
                    one++;
                }
                else
                {
                    zero++;
                }

                if (a[n - i - 1][n - j - 1] == '1')
                {
                    one++;
                }
                else
                {
                    zero++;
                }

                if (one == 0 || zero == 0)
                {
                    continue;
                }

                if (one >= zero)
                {
                    res += zero;
                    a[i][j] = '1';
                    a[n - j - 1][i] = '1';
                    a[j][n - i - 1] = '1';
                    a[n - i - 1][n - j - 1] = '1';
                }
                else
                {
                    res += one;
                    a[i][j] = '0';
                    a[n - j - 1][i] = '0';
                    a[j][n - i - 1] = '0';
                    a[n - i - 1][n - j - 1] = '0';
                }
            }
        }
        cout << res << "\n";
    }

    return 0;
}
