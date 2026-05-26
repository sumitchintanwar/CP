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
        bool flag = false;
        vector<ll> a(n);
        ll yasser = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            yasser += a[i];
        }
        if (a[0] >= yasser || a[n - 1] >= yasser)
        {
            cout << "NO" << "\n";
            continue;
        }

        ll adel = a[0];
        ll best = a[0];

        for (int i = 1; i < n - 1; i++)
        {
            adel = max(a[i], adel + a[i]);
            best = max(best, adel);

            if (best >= yasser)
            {
                cout << "NO" << "\n";
                flag = true;
                break;
            }
        }

        adel = a[1];
        best = a[1];

        for (int i = 2; i < n && !flag; i++)
        {
            adel = max(a[i], adel + a[i]);
            best = max(best, adel);

            if (best >= yasser)
            {
                cout << "NO" << "\n ";
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            cout << "YES" << "\n";
        }
    }

    return 0;
}