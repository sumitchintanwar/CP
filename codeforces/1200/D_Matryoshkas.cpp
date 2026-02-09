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
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        int res = 0;

        for (auto &[el, cnt] : freq)
        {
            res += max(0, freq[el] - freq[el - 1]);
        }

        cout << res << "\n";
    }

    return 0;
}
