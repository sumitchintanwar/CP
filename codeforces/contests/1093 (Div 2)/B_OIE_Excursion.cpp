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
        ll n, m;
        cin >> n >> m;

        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        bool flag = true;
        int cnt = 1;
        for (int i = 2; i <= n; i++)
        {
            if (a[i] == a[i - 1])
            {
                cnt++;
                if (cnt >= m)
                {
                    flag = false;
                    break;
                }
            }
            else
            {
                cnt = 1;
            }
        }
        if (flag)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
