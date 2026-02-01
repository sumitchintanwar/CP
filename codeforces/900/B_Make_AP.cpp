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
        ll a, b, c;
        cin >> a >> b >> c;
        ll A, B, C;
        A = 2 * b - c;
        B = (a + c) / 2;
        C = 2 * b - a;
        bool flag = false;
        if (A / a > 0 && A % a == 0)
        {
            flag = true;
        }
        if (B / b > 0 && B % b == 0 && (c - a) % 2 == 0)
        {
            flag = true;
        }
        if (C / c > 0 && C % c == 0)
        {
            flag = true;
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
