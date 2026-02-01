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
        int n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll maxi = 1;
        ll curr = 1;

        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] <= k)
            {
                curr++;
            }
            else
            {
                curr = 1;
            }
            maxi = max(curr, maxi);
        }
        cout << n - maxi << endl;
    }

    return 0;
}
