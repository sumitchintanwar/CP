#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;

        ll l = lcm(x, y);

        ll cntX = n / x - n / l;
        ll cntY = n / y - n / l;

        ll plus = cntX * (2 * n - cntX + 1) / 2; // n-cntX+1 to n
        // sum from s to e is (s + e) (e - s + 1)/2
        ll minus = (1 + cntY) * cntY / 2; // 1 to cntY
        ll res = plus - minus;

        cout << res << "\n";
    }
    return 0;
}
