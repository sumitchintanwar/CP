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

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());

        bool isPoss = true;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                isPoss = false;
                break;
            }
        }

        if (!isPoss)
        {
            cout << -1 << "\n";
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
