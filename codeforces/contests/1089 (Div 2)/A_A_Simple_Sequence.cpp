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

        cout << 2 << " ";
        for (int i = n; i > 2; i--)
        {
            cout << i << " ";
        }
        cout << 1 << "\n";
    }

    return 0;
}
