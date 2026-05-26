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
        ll ind = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == n)
            {
                ind = i;
            }
        }

        swap(a[0], a[ind]);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
