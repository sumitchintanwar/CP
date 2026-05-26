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
        ll n, W;
        cin >> n >> W;

        vector<ll> a(n);
        vector<ll> cnt(21, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ll p = log2(a[i]);
            cnt[p]++;
        }

        ll res = 0;
        ll rem = n;

        while (rem > 0)
        {
            ll space = W;
            for (int i = 20; i >= 0; i--)
            {
                ll w = 1 << i;

                ll take = min(cnt[i], space / w);

                cnt[i] -= take;
                rem -= take;
                space -= take * w;
            }
            res++;
        }
        cout << res << "\n";
    }

    return 0;
}
