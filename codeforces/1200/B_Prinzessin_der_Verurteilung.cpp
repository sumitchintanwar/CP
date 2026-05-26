#include <bits/stdc++.h>
using namespace std;

using ll = long long;

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

        string s;
        cin >> s;

        string res = "";

        for (char c = 'a'; c <= 'z'; c++)
        {
            if (s.find(c) == string::npos)
            {
                res = c;
                break;
            }
        }
        for (char c1 = 'a'; c1 <= 'z'; c1++)
        {
            for (char c2 = 'a'; c2 <= 'z'; c2++)
            {
                string tmp = "";
                tmp.push_back(c1);
                tmp.push_back(c2);

                if (res == "" && s.find(tmp) == string::npos)
                {
                    res = tmp;
                }
            }
        }
        for (char c1 = 'a'; c1 <= 'z'; c1++)
        {
            for (char c2 = 'a'; c2 <= 'z'; c2++)
            {
                for (char c3 = 'a'; c3 <= 'z'; c3++)
                {
                    string tmp = "";
                    tmp.push_back(c1);
                    tmp.push_back(c2);
                    tmp.push_back(c3);

                    if (res == "" && s.find(tmp) == string::npos)
                    {
                        res = tmp;
                    }
                }
            }
        }

        cout << res << "\n";
    }

    return 0;
}
