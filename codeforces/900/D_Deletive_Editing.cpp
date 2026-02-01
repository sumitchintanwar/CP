#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll N;
    cin >> N;
    while (N--)
    {
        string s, t;
        cin >> s >> t;
        ll m = s.size();
        ll n = t.size();
        vector<ll> freq(26, 0);
        for (int i = 0; i < n; i++)
        {
            freq[t[i] - 'A']++;
        }

        for (int i = m - 1; i >= 0; i--)
        {
            if (freq[s[i] - 'A'] > 0)
            {
                freq[s[i] - 'A']--;
            }
            else
            {
                s[i] = '#';
            }
        }
        string temp;
        for (int i = 0; i < m; i++)
        {
            if (s[i] != '#')
            {
                temp += s[i];
            }
        }

        if (temp == t)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
