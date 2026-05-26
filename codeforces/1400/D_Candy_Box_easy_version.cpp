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
        vector<ll> freq(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i] - 1]++;
        }
        ll res = 0;
        ll last = LLONG_MAX;
        sort(freq.rbegin(), freq.rend());
        for (auto num : freq)
        {
            ll curr = min(num, last - 1);
            if (curr < 0)
            {
                break;
            }
            res += curr;
            last = curr;
        }
        cout << res << "\n";
    }

    return 0;
}
