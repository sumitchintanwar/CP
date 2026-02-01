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

        ll s = 1;
        ll e = n;
        for (int i = n - 1; i >= 0; i--)
        {
            if ((n - i - 1) % 2 == 0)
            {
                a[i] = e;
                e--;
            }
            else
            {
                a[i] = s;
                s++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}