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

        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<ll> odd(n + 1);
        vector<ll> even(n + 1);
        for (int i = 1; i <= n; i++)
        {
            odd[i] += odd[i - 1];
            even[i] += even[i - 1];
            if (i % 2 == 0)
            {
                even[i] += a[i];
            }
            else
            {
                odd[i] += a[i];
            }
        }
        bool flag = false;
        set<ll> st;
        ll res = 0;
        for (int i = 1; i <= n; i++)
        {
            ll diff = even[i] - odd[i];
            if (st.count(diff) || diff == 0)
            {
                flag = true;
                break;
            }
            st.insert(diff);
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
