#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int mod = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;

    int cnt = 0;

    ll total = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
        {
            cnt++;
        }
        else if (s[i] == 'b')
        {
            total = total * (cnt + 1) % mod;
            cnt = 0;
        }
    }
    total = total * (cnt + 1) % mod;

    ll res = (total - 1 + mod) % mod;
    cout << res << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
