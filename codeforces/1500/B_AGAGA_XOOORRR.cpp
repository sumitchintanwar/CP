#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> a(n);
        ll totalXor = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            totalXor ^= a[i];
        }
        if (totalXor == 0)
        {
            cout << "YES" << "\n";
            continue;
        }
        ll cnt = 0;
        ll currXor = 0;
        for (int i = 0; i < n; i++)
        {
            currXor ^= a[i];

            if (currXor == totalXor)
            {
                cnt++;
                currXor = 0;
            }
        }

        if (cnt >= 2)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << "\n";
    }

    return 0;
}
