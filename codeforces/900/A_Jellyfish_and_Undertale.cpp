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
        ll a, b, n;
        cin >> a >> b >> n;
        vector<ll> x(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }

        ll maxTime = b;
        for (int i = 0; i < n; i++)
        {
            maxTime += min(a - 1, x[i]);
        }

        cout << maxTime << endl;
    }
    return 0;
}
