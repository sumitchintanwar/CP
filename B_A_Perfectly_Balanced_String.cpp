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
        string s;
        cin >> s;
        set<char> unique;
        for (char c : s)
        {
            unique.insert(c);
        }

        int k = unique.size();
        bool isBalanced = true;

        for (int i = 0; i < s.length(); i++)
        {
            if (i >= k && s[i] != s[i - k])
            {
                isBalanced = false;
                break;
            }
        }

        if (isBalanced)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
