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
        ll mini;
        if (n < 4 || n % 2 == 1)
        {
            cout << -1 << endl;
            continue;
        }

        else
        {
            cout << (n + 5) / 6 << " ";
            cout << n / 4 << endl;
        }
    }

    return 0;
}
