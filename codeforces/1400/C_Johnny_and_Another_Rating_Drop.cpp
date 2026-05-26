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

        ll ans = 0;

        while (n > 0)
        {
            ans += n;
            n /= 2;
        }

        cout << ans << "\n";
    }

    return 0;
}
