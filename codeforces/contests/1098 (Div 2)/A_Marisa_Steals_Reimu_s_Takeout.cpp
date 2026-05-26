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
        
        unordered_map<ll, ll> mpp;
        vector<ll> w(n);
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
            mpp[(w[i] % 3)]++;
        }

        ll res = 0;
        res += mpp[0];
        
        ll p = min(mpp[1], mpp[2]);
        res += p;

        ll ones = (mpp[1] - p) / 3;
        ll twos = (mpp[2] - p) / 3;

        res += ones;
        res += twos;

        cout << res << "\n";
    }


    return 0;
}
