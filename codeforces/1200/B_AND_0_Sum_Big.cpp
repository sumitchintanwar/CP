#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll mod = 1000000007;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll res = 1;
        for (int i = 0; i < k; i++)
        {
            res = (res * n) % mod;
        }
        cout << res << "\n";
    }

    return 0;
}
