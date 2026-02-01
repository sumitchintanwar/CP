#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        long long dy = d - b;
        if (dy < 0)
        {
            cout << -1 << '\n';
            continue;
        }

        long long x_temp = a + dy;
        if (x_temp < c)
        {
            cout << -1 << '\n';
            continue;
        }

        long long left = x_temp - c;
        cout << dy + left << '\n';
    }
}
