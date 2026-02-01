#include <bits/stdc++.h>
using namespace std;

int main()
{
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
        int cnt = 0;
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }
    return 0;
}
