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

        int i = 0;
        int j = n - 1;

        ll maxi = n;
        ll mini = 1;
        bool printed = false;
        while (i < j)
        {
            if (a[i] == mini)
            {
                i++;
                mini++;
            }
            else if (a[i] == maxi)
            {
                i++;
                maxi--;
            }

            if (a[j] == mini)
            {
                j--;
                mini++;
            }
            else if (a[j] == maxi)
            {
                j--;
                maxi--;
            }

            if (a[i] != mini && a[i] != maxi &&
                a[j] != mini && a[j] != maxi)
            {
                cout << i + 1 << " " << j + 1 << "\n";
                printed = true;
                break;
            }
        }
        if (!printed)
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}
