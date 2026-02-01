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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll res = 1;
        ll curr = 1;

        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                continue;
            }
            if (a[i] == a[i - 1] + 1)
            {
                curr++;
            }
            else
            {
                curr = 1;
            }
            res = max(res, curr);
        }

        cout << res << endl;
    }

    return 0;
}