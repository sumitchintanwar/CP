#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll getAnd(ll l, ll r, vector<ll> &a, vector<vector<ll>> &pre)
{
    ll res = 0;
    for (int i = 0; i < 30; i++)
    {
        if (pre[i][r + 1] - pre[i][l] == 0)
        {
            res |= (1LL << i);
        }
    }
    return res;
}

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

        vector<ll> a(n);
        for (int i = 0; i < n; i++)   
        {
            cin >> a[i];
        } 

        vector<vector<ll>> pre(30, vector<ll>(n + 1));

        for (int j = 0; j < 30; j++)
        {
            pre[j][0] = 0;
            for (int i = 0; i < n; i++)
            {
                if ((a[i] >> j) & 1)
                {
                    pre[j][i + 1] = pre[j][i];
                }
                else
                {
                    pre[j][i + 1] = pre[j][i] + 1;
                }
            }
        }
        ll q;
        cin >> q;

        while (q--)
        {
            ll l, k;
            cin >> l >> k;
            l--;

            ll s = l;
            ll e = n - 1;
            ll res = -1;
            while (s <= e)
            {
                ll mid = s + (e - s) / 2;
                if (getAnd(l, mid, a,pre) >= k)
                {
                    res = mid;
                    s = mid + 1;
                }
                else
                {
                    e = mid - 1;
                }
            }
            if (res == -1)
            {
                cout << res << " ";
            }
            else
            {
                cout << res + 1 << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
