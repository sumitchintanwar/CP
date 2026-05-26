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

        ll res = 0;
        ll last1 = INT_MAX;
        ll last2 = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (a[i] <= last1)
            {
                last1 = a[i];
            }
            else if (a[i] <= last2)
            {
                last2 = a[i];
            }
            else
            {
                res++;
                if (last1 < last2)
                {
                    last1 = a[i];
                }
                else
                {
                    last2 = a[i];
                }
            }

            if (last1 > last2)
            {
                swap(last1, last2);
            }
        }
        cout << res << "\n";
    }

    return 0;
}
