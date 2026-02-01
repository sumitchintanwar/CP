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
        ll x, y, k;
        cin >> x >> y >> k;

        ll needed = k * y + k - 1;
        ll gain = x - 1;
        ll trades = (needed + gain - 1) / gain;
        trades += k;

        cout << trades << "\n";
    }

    return 0;
}
