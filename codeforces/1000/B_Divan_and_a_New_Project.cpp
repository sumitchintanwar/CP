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

        vector<ll> a(n);
        vector<pair<ll, ll>> temp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            temp.push_back({a[i], i + 1});
        }
        // sort(temp.rbegin(), temp.rend());
        sort(temp.begin(), temp.end(), greater<pair<ll, ll>>());

        vector<ll> ans(n + 1);
        ll res = 0;

        ll head = 0;
        ans[0] = head;

        ll k = 1;
        for (int i = 0; i < temp.size(); i++)
        {
            ll visits = temp[i].first;
            ll ind = temp[i].second;
            ll p;
            if (i % 2 == 0)
            {
                p = head + k;
            }
            else
            {
                p = head - k;
            }
            ans[ind] = p;
            res += 2 * abs(p - head) * visits;
            if (i % 2 == 1)
            {
                k++;
            }
        }
        cout << res << "\n";
        for (int i = 0; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
