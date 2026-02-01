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
        ll n, x;
        cin >> n >> x;

        vector<ll> temp[3];
        for (int i = 0; i < 3; i++)
        {
            ll s = 0;
            temp[i].push_back(s);

            for (int j = 0; j < n; j++)
            {
                ll a;
                cin >> a;

                if ((s | a) != s)
                {
                    s |= a;
                    temp[i].push_back(s);
                }
            }
        }
        bool flag = false;
        for (auto &A : temp[0])
        {
            for (auto &B : temp[1])
            {
                for (auto &C : temp[2])
                {
                    if ((A | B | C) == x)
                    {
                        flag = true;
                        break;
                    }
                }
            }
        }

        if (!flag)
        {
            cout << "No" << "\n";
        }
        else
        {
            cout << "Yes" << "\n";
        }
    }

    return 0;
}
