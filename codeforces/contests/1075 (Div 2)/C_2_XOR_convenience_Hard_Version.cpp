#include <bits/stdc++.h>
using namespace std;

using ll = long long;

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

        if (n % 2 == 0)
        {
            cout << n << " ";
        }
        else
        {
            cout << n - 1 << " ";
        }

        for (int i = 2; i < n; ++i)
        {
            cout << (i ^ 1) << " ";
        }

        cout << 1 << endl;
    }
    return 0;
}