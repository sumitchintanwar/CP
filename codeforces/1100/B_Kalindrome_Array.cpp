#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(vector<ll> &a, ll x)
{
    vector<ll> temp;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != x)
        {
            temp.push_back(a[i]);
        }
    }

    int n = temp.size();
    for (int i = 0; i < n; i++)
    {
        if (temp[i] != temp[n - 1 - i])
        {
            return false;
        }
    }
    return true;
}
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

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != a[n - 1 - i])
            {
                flag = true;
                if (check(a, a[i]) || check(a, a[n - 1 - i]))
                {
                    cout << "YES" << "\n";
                }
                else
                {
                    cout << "NO" << "\n";
                }
                break;
            }
        }

        if (!flag)
        {
            cout << "YES" << "\n";
        }
    }

    return 0;
}
