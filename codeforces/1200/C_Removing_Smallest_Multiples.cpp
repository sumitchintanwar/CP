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

        string s;
        cin >> s;

        ll res = 0;
        vector<ll> removed(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j += i)
            {
                if (s[j - 1] == '1')
                {
                    break;
                }

                if (removed[j])
                {
                    continue;
                }
                else
                {
                    removed[j] = 1;
                    res += i;
                }
            }
        }
        cout << res << "\n";
    }

    return 0;
}
