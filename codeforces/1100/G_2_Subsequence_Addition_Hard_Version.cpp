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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        bool printed = false;
        if (a[0] != 1)
        {
            cout << "No" << "\n";
            printed = true;
        }
        ll sum = 1;
        for (int i = 1; i < n; i++)
        {
            if (!printed && sum < a[i])
            {
                cout << "No" << "\n";
                printed = true;
                break;
            }
            sum += a[i];
        }
        if (!printed)
        {
            cout << "Yes" << "\n";
        }
    }

    return 0;
}
