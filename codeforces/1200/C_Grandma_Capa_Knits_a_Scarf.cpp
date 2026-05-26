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
        string s;
        cin >> s;

        ll res = INT_MAX;

        for (char c = 'a'; c <= 'z'; c++)
        {
            int i = 0;
            int j = n - 1;
            ll curr = 0;
            bool possible = true;

            while (i < j)
            {
                if (s[i] == s[j])
                {
                    i++;
                    j--;
                }
                else
                {
                    if (s[i] == c)
                    {
                        curr++;
                        i++;
                    }
                    else if (s[j] == c)
                    {
                        curr++;
                        j--;
                    }
                    else
                    {
                        possible = false;
                        break;
                    }
                }
            }
            if (!possible)
            {
                curr = INT_MAX;
            }
            res = min(res, curr);
        }
        if (res == INT_MAX)
        {
            res = -1;
        }

        cout << res << "\n"; //
    }

    return 0;
}
