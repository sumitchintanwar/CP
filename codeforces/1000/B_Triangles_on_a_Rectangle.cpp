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
        ll w, h;
        cin >> w >> h;
        ll base = INT_MIN;
        ll height = 0;
        ll area = INT_MIN;
        for (int i = 0; i < 4; i++)
        {
            ll k;
            cin >> k;
            ll first, last;
            for (int j = 0; j < k; j++)
            {
                ll x;
                cin >> x;
                if (j == 0)
                {
                    first = x;
                }
                if (j == k - 1)
                {
                    last = x;
                }
            }
            base =  last - first;

            if (i <= 1)
            {
                height = h;
            }
            else
            {
                height = w;
            }
            area = max(area, base * height);
        }
        cout << area << "\n";
    }

    return 0;
}
