#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n, k1, k2;
    cin >> n >> k1 >> k2;

    vector<ll> a(n);
    vector<ll> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    priority_queue<ll> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(abs(a[i] - b[i]));
    }

    ll k = k1 + k2;
    while (k > 0)
    {
        ll x = pq.top();
        pq.pop();

        if (x == 0)
        {
            break;
        }

        k--;
        x--;
        pq.push(x);
    }

    ll res = 0;
    while (!pq.empty())
    {
        res += pq.top() * pq.top();
        pq.pop();
    }

    if (k % 2)
    {
        res++;
    }

    cout << res << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t = 1;
    // cin >>  t;
    while (t--)
    {
        solve();
    }

    return 0;
}
