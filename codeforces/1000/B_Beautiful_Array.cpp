#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, b, s;
        cin >> n >> k >> b >> s;

        ll mini = k * b;
        ll maxi = (k * b) + (k - 1) * n;

        if (s < mini || s > maxi)
        {
            cout << "-1\n";
        }
        else
        {
            vector<ll> ans(n, 0);
            ans[0] = mini;
            s -= mini;

            for (int i = 0; i < n; i++)
            {
                ll add = min(k - 1, s);
                ans[i] += add;
                s -= add;
            }
            for (int i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << "\n";
        }
    }
}
