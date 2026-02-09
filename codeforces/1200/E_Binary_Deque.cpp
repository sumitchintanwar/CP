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
        ll n, s;
        cin >> n >> s;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int len = -1;
        map<int, int> mpp;
        mpp[0] = -1;

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];

            if (mpp.count(sum - s))
            {
                len = max(len, i - mpp[sum - s]);
            }

            if (!mpp.count(sum))
            {
                mpp[sum] = i;
            }
        }

        if (len == -1)
        {
            cout << "-1\n";
        }
        else
        {
            cout << (n - len) << "\n";
        }
    }

    return 0;
}
