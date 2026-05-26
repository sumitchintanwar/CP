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
        int n;
        cin >> n;

        vector<ll> msb(32, 0);

        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;

            int msb_pos = 0;
            for (int bit = 30; bit >= 0; bit--)
            {
                if ((x >> bit) & 1)
                {
                    msb_pos = bit;
                    break;
                }
            }

            msb[msb_pos]++;
        }
        ll res = 0;
        for (int i = 0; i < 32; ++i)
        {
            ll count = msb[i];
            res += (count * (count - 1)) / 2;
        }

        cout << res << endl;
    }

    return 0;
}
