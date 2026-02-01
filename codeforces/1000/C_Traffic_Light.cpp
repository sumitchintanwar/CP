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
        char c;
        ll n;
        cin >> n >> c;

        string s;
        cin >> s;

        s += s;
        ll ind = 0;
        ll res = 0;
        n = n * 2;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'g')
            {
                ind = i;
            }
            else if (s[i] == c)
            {
                ll diff = ind - i;
                res = max(res, diff);
            }
        }

        cout << res << endl;
    }

    return 0;
}
