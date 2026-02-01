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
        int n, m;
        cin >> n >> m;

        string x;
        cin >> x;

        string s;
        cin >> s;
        if (x.find(s) != string::npos)
        {
            cout << 0 << "\n";
            continue;
        }

        int cnt = 0;
        bool found = false;

        while (x.size() <= 25)
        {
            x += x;
            cnt++;

            if (x.find(s) != string::npos)
            {
                cout << cnt << "\n";
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}