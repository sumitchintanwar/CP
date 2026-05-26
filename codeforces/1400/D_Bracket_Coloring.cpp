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

        ll mini = LLONG_MAX;
        ll maxi = LLONG_MIN;
        vector<ll> temp(n);
        temp[0] = (s[0] == '(' ? 1 : -1);

        mini = min(mini, temp[0]);
        maxi = max(maxi, temp[0]);
        for (int i = 1; i < n; i++)
        {
            temp[i] = temp[i - 1] + (s[i] == '(' ? 1 : -1);
            mini = min(temp[i], mini);
            maxi = max(temp[i], maxi);
        }
        vector<ll> res(n);
        if (temp[n - 1] != 0)
        {
            cout << -1 << "\n";
            continue;
        }
        if (mini == 0 || maxi == 0)
        {
            cout << 1 << "\n";
            for (int i = 0; i < n; i++)
            {
                cout << "1" << " ";
            }
            cout << "\n";
            continue;
        }
        else
        {
            cout << "2" << "\n";
            for (int i = 0; i < n; i++)
            {
                if (temp[i] > 0)
                {
                    res[i] = 1;
                }
                else if (temp[i] < 0)
                {
                    res[i] = 2;
                }
                else
                {
                    res[i] = (temp[i - 1] > 0 ? 1 : 2);
                }
            }
        }
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
