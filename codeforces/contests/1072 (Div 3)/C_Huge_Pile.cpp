#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int solve(int n, int k)
{
    if (k > n)
    {
        return -1;
    }

    ll mini = n;
    ll maxi = n;
    int ans = 0;

    while (true)
    {
        if (k >= mini && k <= maxi)
        {
            return ans;
        }

        if (maxi < k)
        {
            return -1;
        }

        if (maxi == 0)
        {
            return -1;
        }

        mini = mini / 2;
        maxi = (maxi + 1) / 2;
        ans++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int res = solve(n, k);
        cout << res << '\n';
    }

    return 0;
}
