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
        ll n, x1, x2, k;
        cin >> n >> x1 >> x2 >> k;
        ll dist = abs(x1 - x2);
        ll res = min(n - dist, dist);

        if (n <= 3) {
            cout << res << "\n"; 
        } 
        else {
            cout << res + k << "\n";
        }
    }
    return 0;
}
