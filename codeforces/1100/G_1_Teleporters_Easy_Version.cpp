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
        ll n, c;
        cin >> n >> c;

        vector<ll> temp;
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            temp.push_back(a + i + 1);
        }
        sort(temp.begin(), temp.end());
        ll i = 0;
        ll cnt = 0;
        while (i < n && c - temp[i] >= 0)
        {
            c -= temp[i];
            cnt++;
            i++;
        }
        cout << cnt << "\n";
    }

    return 0;
}
