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
        vector<ll> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }

        ll sum = accumulate(a.begin(), a.end(), 0LL);
        ll rem = sum / 2;
        ll res = sum - rem;

        sort(a.rbegin(), a.rend());
        for (auto x : a)
        {
            if (rem <= 0)
            {
                break;
            }
            rem -= x;
            res++;
        }

        cout << res << '\n';
    }

    return 0;
}
