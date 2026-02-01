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
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n * k);
        for (ll i = 0; i < n * k; i++)
            cin >> a[i];

        ll step = n / 2 + 1;
        ll p = n * k;
        // -step *k;

        ll sum = 0;
        while (k--)
        {
            p -= step;
            sum += a[p];

            // sum += a[p];
            // p == step;
        }

        cout << sum << '\n';
    }
    return 0;
}
