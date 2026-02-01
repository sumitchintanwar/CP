#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll k = abs(a[0] - 1);
        for (ll i = 1; i < n; i++)
        {
            k = gcd(k, abs(a[i] - (i + 1)));
        }
        cout << k << endl;
    }
    return 0;
}
