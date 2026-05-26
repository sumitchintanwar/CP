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
        vector<int> p(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            p[i + 1] = p[i] ^ a[i];
        }

        string s;
        cin >> s;

        int xor0 = 0;
        int xor1 = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                xor0 ^= a[i];
            }
            else
            {
                xor1 ^= a[i];
            }
        }

        ll q;
        cin >> q;

        while (q--)
        {
            ll tp;
            cin >> tp;
            if (tp == 1)
            {
                ll l, r;
                cin >> l >> r;

                ll curr = p[r] ^ p[l - 1];
                xor0 ^= curr;
                xor1 ^= curr;
            }
            else
            {
                ll bit;
                cin >> bit;
                if (bit == 0)
                {
                    cout << xor0 << " ";
                }
                else
                {
                    cout << xor1 << " ";
                }
            }
        }
        cout << "\n";
    }

    return 0;
}
