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

        string s;
        cin >> s;
        ll curr = 0;
        int prev = -1;
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                curr++;
            }
            else
            {
                cnt++;
                if (prev == -1)
                {
                    cnt += (curr + 1) / 3;
                }
                else
                {
                    cnt += curr / 3;
                }
                curr = 0;
                prev = i;
            }
        }

        if (prev == -1)
        {
            cnt = (n + 2) / 3;
        }
        else
        {
            cnt += (curr + 1) / 3;
        }
        cout << cnt << "\n";
    }

    return 0;
}
