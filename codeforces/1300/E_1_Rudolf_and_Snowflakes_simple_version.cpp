#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // unordered_set<int> st;
    ll maxi = 1e6;
    vector<bool> temp(1e6 + 1, 0);
    for (ll k = 2; k * k * k <= maxi; k++)
    {
        ll curr = k * k;
        ll sum = 1 + k + k * k;

        while (sum <= maxi)
        {
            // st.insert(sum);
            temp[sum] = true;
            curr = curr * k;
            sum += curr;
        }
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        bool res = temp[n];

        ll d = 4 * n - 3;
        ll s = sqrt(d);

        if (s * s == d && (s - 1) % 2 == 0)
        {
            ll k = (s - 1) / 2;
            if (k > 1)
            {
                res = true;
            }
        }

        // if (st.count(n))
        if (temp[n])
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
