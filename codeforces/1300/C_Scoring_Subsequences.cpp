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
        ll len = 0;
        for (int i = 0; i < n; i++)
        {
            int L = len + 1; 

            if (a[i - L + 1] >= L)
            {
                len++;
            }
            cout << len << " ";
        }

        cout << "\n";
    }

    return 0;
}
