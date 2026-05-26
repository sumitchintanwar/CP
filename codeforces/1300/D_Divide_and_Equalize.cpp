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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        unordered_map<ll, ll> mpp;

        for (int i = 0; i < n; i++)
        {
            for (int j = 2; j * j <= a[i]; j++)
            {
                while (a[i] % j == 0)
                {
                    mpp[j]++;
                    a[i] = a[i] / j;
                }
            }

            if (a[i] > 1)
            {
                mpp[a[i]]++;
            }
        }
        bool poss = true;
        for (auto i : mpp)
        {
            if (i.second % n != 0)
            {
                poss = false;
                break;
            }
        }
        if (poss)
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
