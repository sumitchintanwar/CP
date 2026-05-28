#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    map<pair<int, int>, int> freq;

    int cnt = 0;
    int maxi = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            if (b[i] == 0)
            {
                cnt++;
            }
            continue;
        }

        int num = -b[i];
        int den = a[i];

        int g = gcd(num, den);
        num /= g;
        den /= g;

        if (den < 0)
        {
            num = -num;
            den = -den;
        }

        freq[{num, den}]++;

        if (freq[{num, den}] > maxi)
        {
            maxi = freq[{num, den}];
        }
    }

    cout << cnt + maxi << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
