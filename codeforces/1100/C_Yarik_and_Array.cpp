#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll sum = a[0];
        ll maxi = a[0];

        for (int i = 1; i < n; i++)
        {
            if ((abs(a[i]) % 2) != (abs(a[i - 1]) % 2))
            {
                sum = max(a[i], sum + a[i]);
            }
            else
            {
                sum = a[i];
            }

            maxi = max(maxi, sum);
        }

        cout << maxi << "\n";
    }
}
