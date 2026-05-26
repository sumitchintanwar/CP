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

        vector<ll> a(n);
        string temp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            temp += to_string(a[i]);
        }

        for (int i = 1; i < n - 1; i++)
        {
            ll currMax = stoi(max({temp[i], temp[i - 1], temp[i + 1]}));
        }
    }

    return 0;
}
