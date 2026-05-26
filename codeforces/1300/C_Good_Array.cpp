#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> a(n);
        unordered_map<ll, ll> mpp;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            mpp[a[i]]++;
        }
        vector<ll> res;
        for (int i = 0; i < n; i++)
        {
            mpp[a[i]]--;
            ll curr = sum - a[i];
            if (curr % 2 == 0)
            {
                ll target = curr / 2;
                if (mpp[target] > 0)
                {
                    res.push_back(i + 1);
                }
            }
            mpp[a[i]]++;
        }
        cout << res.size() << "\n";
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
