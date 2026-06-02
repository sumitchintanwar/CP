#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{

    ll n;
    cin >> n;

    ll curr = 0;
    ll maxi = 2e18;

    for (int i = 1; i <= n; i++)
    {
        ll a;
        cin >> a;
        curr += a;
        ll h = curr / i;
        maxi = min(maxi, h);
        cout << maxi << " ";
    }
    cout << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
