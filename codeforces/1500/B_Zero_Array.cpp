#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll sum = 0;
        ll maxi = 0;
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            sum += a;
            maxi = max(a, maxi);
        }
        cout << ((sum % 2 || maxi > sum - maxi) ? "NO" : "YES") << "\n";
    }

    return 0;
}
