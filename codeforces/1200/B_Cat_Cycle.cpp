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
        ll n, k;
        cin >> n >> k;
        k--;

        if (n % 2 == 0)
        {
            int ans = k % n;
            cout << (k % n) + 1 << "\n";
        }
        else
        {
            int val = n / 2;
            cout << ((k + (k / val)) % n) + 1 << "\n";
        }
    }

    return 0;
}
