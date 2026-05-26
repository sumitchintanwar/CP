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
        ll n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        bool poss = true;
        ll i = 0;

        while (i < k)
        {
            ll j = i;

            bool has0 = false;
            bool has1 = false;

            while (j < n)
            {
                if (s[j] == '0')
                {
                    has0 = true;
                }
                else if (s[j] == '1')
                {
                    has1 = true;
                }
                j += k;
            }

            if (has0 && has1)
            {
                poss = false;
                break;
            }

            if (has0)
            {
                s[i] = '0';
            }
            if (has1)
            {
                s[i] = '1';
            }
            i++;
        }

        if (!poss)
        {
            cout << "NO" << "\n";
            continue;
        }

        ll zeroes = 0;
        ll ones = 0;

        i = 0;
        while (i < k)
        {
            if (s[i] == '0')
            {
                zeroes++;
            }

            if (s[i] == '1')
            {
                ones++;
            }
            i++;
        }

        if (zeroes > k / 2 || ones > k / 2)
        {
            cout << "NO" << "\n";
        }
        else
        {
            cout << "YES" << "\n";
        }
    }

    return 0;
}
