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
        ll n;
        cin >> n;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> freq(n + 1, 0);
        for (ll i = 0; i < n; i++)
        {
            freq[a[i]]++;
        }

        ll mex = 0;
        while (freq[mex] > 0)
        {
            mex++;
        }
        if (mex == 0)
        {
            cout << "NO\n";
        }
        else if (mex > 1)
        {
            cout << "YES\n";
        }
        else if (mex == 1)
        {
            if (freq[0] == 1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
