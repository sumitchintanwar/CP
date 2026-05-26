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

        for (int i = 1; i <= n; i++) {
            cout << 2 * i - 1 << " ";
        }
        cout << "\n";
    }

    return 0;
}
