#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool isPresent(vector<ll> &a, int target)
{
    int n = a.size();
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (mid == target)
        {
            return true;
        }
        else if (target > a[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return false;
}
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

        sort(a.begin(), a.end());
        vector<ll> res(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            if (isPresent(a, i + 1))
            {
                res[i + 1] = 1;
            }
            else {
                
            }
        }
    }

    return 0;
}
