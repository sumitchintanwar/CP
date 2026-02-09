#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    ll n, q;
    cin >> n >> q;

    vector<ll> a(n + 1, 0);
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    vector<ll> indiUpdate(n + 1, 0);
    ll time = 0; // global update time
    ll val = 0;  // global update value
    ll curr = 0;
    for (int k = 1; k <= q; k++)
    {
        ll type;
        cin >> type;
        if (type == 1)
        {
            ll i, x;
            cin >> i >> x;

            if (time == 0 || indiUpdate[i] > time)
            {
                curr = a[i];
            }
            else
            {
                curr = val;
            }

            sum -= curr;
            sum += x;

            a[i] = x;
            indiUpdate[i] = k;
        }
        else
        {
            ll x;
            cin >> x;
            time = k;
            val = x;
            sum = x * n;
        }
        cout << sum << "\n";
    }

    return 0;
}
