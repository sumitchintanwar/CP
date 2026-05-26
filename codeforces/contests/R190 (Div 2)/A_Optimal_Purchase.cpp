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
        ll n, a, b;
        cin >> n >> a>> b;
        ll full = n / 3;
        ll rem = n % 3;
        ll cost1 = full * min(3 * a, b);
        ll cost2 = min(rem * a, b);
        ll res = cost1 + cost2;
        cout << res << "\n";
    }

    return 0;
}
