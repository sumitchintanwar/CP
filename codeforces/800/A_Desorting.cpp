#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                flag = true;
            }
        }
        if (flag)
        {
            cout << 0 << endl;
        }
        int mn = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            mn = min(mn, abs(a[i] - a[i - 1]));
        }
        if (!flag)
        {
            int ans = (mn + 2) / 2;
            cout << ans << endl;
        }
    }
    return 0;
}