#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> a(n + 1);
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        vector<ll> b(n + 1);
        for (ll i = 1; i <= n; i++)
        {
            cin >> b[i];
        }
        vector<ll> pref(n + 1, 0);
        for (ll i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] + b[i];
        }
        vector<ll> cnt(n + 2, 0);
        vector<ll> res(n + 1, 0);
        for (ll i = 1; i <= n; i++)
        {
            ll x = a[i] + pref[i - 1];
            ll j = upper_bound(pref.begin(), pref.end(), x) - pref.begin();

            if (j <= n)
            {
                res[j] += x - pref[j - 1];
            }
            cnt[i]++;
            cnt[j]--;
        }

        for (ll i = 1; i <= n; i++)
        {
            cnt[i] += cnt[i - 1];
            res[i] += cnt[i] * b[i];
        }

        for (ll i = 1; i <= n; i++)
        {
            cout << res[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}
