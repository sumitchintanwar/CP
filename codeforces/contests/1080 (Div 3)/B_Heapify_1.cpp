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

        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        bool possible = true;
        for (int i = 1; i <= n; i++)
        {
            ll curr = a[i];
            ll ind = i;
            while (ind % 2 == 0)
            {
                ind /= 2;
            }
            while (curr % 2 == 0)
            {
                curr /= 2;
            }
            if (ind != curr)
            {
                possible = false;
                break;
            }
        }

        if (possible)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
