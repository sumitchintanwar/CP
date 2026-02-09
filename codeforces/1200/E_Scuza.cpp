#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int solve(ll val, vector<ll> &preMax, ll n)
{
    int s = 0;
    int e = n - 1;
    ll res = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (preMax[mid] <= val)
        {
            s = mid + 1;
            res = mid;
        }
        else
        {
            e = mid - 1;
        }
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> b(q);
        for (int i = 0; i < q; i++)
        {
            cin >> b[i];
        }

        vector<ll> prefix(n);
        vector<ll> preMax(n);
        
        prefix[0] = a[0];
        preMax[0] = a[0];

        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + a[i];
            preMax[i] = max(preMax[i - 1], a[i]);
        }

        for (int i = 0; i < q; i++)
        {
            int val = b[i];

            int ind = solve(val, preMax, n);

            if (ind == -1)
            {
                cout << "0" << " ";
            }
            else
            {
                cout << prefix[ind] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
