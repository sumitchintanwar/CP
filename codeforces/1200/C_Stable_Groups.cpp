#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k, x;
    cin >> n >> k >> x;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<ll> gap;
    sort(a.begin(), a.end());
    ll cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] > x)
        {
            cnt++;
            gap.push_back(a[i] - a[i - 1] - 1);
        }
    }
    sort(gap.begin(), gap.end());

    for (int i = 0; i < gap.size(); i++)
    {
        ll needed = gap[i] / x;
        if (k >= needed)
        {
            cnt--;
            k -= needed;
        }
        else
        {
            break;
        }
    }
    cout << cnt << "\n";

    return 0;
}
