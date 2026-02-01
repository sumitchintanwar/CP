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
        int N;
        cin >> N;

        string s;
        cin >> s;
        unordered_map<char, int> mpp;
        bool odd = true;

        for (char ch : s)
        {
            mpp[ch]++;
            if (mpp[ch] > 2)
            {
                odd = false;
                break;
            }
        }

        if (odd)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
