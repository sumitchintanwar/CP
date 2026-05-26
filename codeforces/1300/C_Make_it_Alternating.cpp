#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll mod = 998244353;
const int MAXN = 200005;

ll fact[MAXN];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    fact[0] = 1;
    for (int i = 1; i < MAXN; i++)
    {
        fact[i] = (fact[i - 1] * i) % mod;
    }

    ll t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int n = s.size();
        vector<ll> temp;
        ll curr = 1;

        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                curr++;
            }
            else
            {
                temp.push_back(curr);
                curr = 1;
            }
        }

        temp.push_back(curr);

        ll res = 0;
        ll ways = 1;

        for (int i = 0; i < temp.size(); i++)
        {
            if (temp[i] > 1)
            {
                ways = (ways * temp[i]) % mod;
                res += temp[i] - 1;
            }
        }

        ways = (ways * fact[res]) % mod;

        cout << res << " " << ways << "\n";
    }

    return 0;
}