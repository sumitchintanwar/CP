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

        // vector<int> a(n);
        string s;
        cin >> s;

        // for (int i = 0; i < n; i++)
        // {
        //     cin >> a[i];
        // }

        int total = 0;
        bool threeEmpty = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.' && i + 1 < n && s[i + 1] == '.' && i + 2 < n && s[i + 2] == '.')
            {
                threeEmpty = true;
                break;
            }
            if (s[i] == '.')
            {
                total++;
            }
        }
        if (threeEmpty)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << total << '\n';
        }
    }
    return 0;
}