#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // ll t;
    // cin >> t;
    // while (t--)
    // {
    ll n, d;
    cin >> n >> d;

    ll i = n - 1;
    vector<ll> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p.begin(), p.end());

    ll size = n;
    ll ans = 0;
    while (i >= 0)
    {
        ll req = (d / p[i]) + 1;
        if (req <= size)
        {
            size -= req;
            i--;
            ans++;
        }
        else
        {
            break;
        }
    }

    cout << ans << endl;
    // }

    return 0;
}
