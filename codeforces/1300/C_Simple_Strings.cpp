#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        string res;
        res += s[0];
        for (int i = 1; i < n; i++)
        {
            if (s[i] == res.back())
            {

                for (char ch = 'a'; ch <= 'z'; ch++)
                {
                    // if (i + 1 < n && ch != s[i + 1] && ch != s[i - 1])
                    if (ch != res.back() && (i + 1 == n || ch != s[i + 1]))
                    {
                        res += ch;
                        break;
                    }
                }
            }
            else
            {
                res += s[i];
            }
        }
        for (char ch : res)
        {
            cout << ch << "";
        }
        cout << "\n";
    }

    return 0;
}
