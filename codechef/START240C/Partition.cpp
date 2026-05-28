#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n;
    cin >> n;

    unordered_map<ll, ll> freq;
    ll maxi = 0;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        freq[x]++;
        maxi = max(maxi, freq[x]);
    }

    cout << (n - maxi + 1) << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}