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
        string s;
        cin >> s;

        ll n = s.size();
        bool allOnes = true;
        for (char c : s)
        {
            if (c == '0')
            {
                allOnes = false;
                break;
            }
        }
        ll res = n * n;
        if (allOnes)
        {
            cout << res << "\n";
            continue;
        }

        ll maxi = 0;
        ll curr = 0;
        string s2 = s + s;
        for (ll i = 0; i < 2 * n; i++)
        {
            if (s2[i] == '1')
            {
                curr++;
            }
            else
            {
                maxi = max(maxi, curr);
                curr = 0;
            }
        }

        maxi = max(curr, maxi);

        ll side1 = (maxi + 1) / 2;
        ll side2 = (maxi + 2) / 2;

        cout << side1 * side2 << "\n";
    }

    return 0;
}