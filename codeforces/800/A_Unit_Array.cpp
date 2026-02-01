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
        int neg = 0;
        int pos = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == -1)
            {
                neg++;
            }
            else
            {
                pos++;
            }
        }
        while (pos < neg || neg % 2 == 1)
        {
            neg--;
            pos++;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
