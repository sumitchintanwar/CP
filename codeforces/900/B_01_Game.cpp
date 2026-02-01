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
        ll zeroes = 0;
        ll ones = 0;
        ll mini = INT_MAX;
        ll n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                ones++;
            }
            else
            {
                zeroes++;
            }
            mini = min(zeroes, ones);
        }

        if (mini % 2 == 0)
        {
            cout << "NET\n";
        }
        else
        {
            cout << "DA\n";
        }
    }

    return 0;
}
