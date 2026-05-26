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

        vector<int> bitCount(32, 0);
        for (int num : a)
        {
            for (int i = 0; i < 32; i++)
            {
                if (num & (1 << i))
                {
                    bitCount[i]++;
                }
            }
        }
        vector<ll> res;
        res.push_back(1);
        for (int i = 2; i <= n; i++)
        {
            bool flag = true;
            for (int num : bitCount)
            {
                if (num % i != 0)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                res.push_back(i);
            }
        }

        for (int it : res)
        {
            cout << it << " ";
        }
        cout << "\n";
    }

    return 0;
}
