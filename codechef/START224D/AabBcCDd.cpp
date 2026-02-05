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

        vector<int> cnt(26, 0);

        for (char c : s)
        {
            c = tolower(c);
            cnt[c - 'a']++;
        }

        int max1 = 0;
        int max2 = 0;

        for (int x : cnt)
        {
            if (x > max1)
            {
                max2 = max1;
                max1 = x;
            }
            else if (x <= max1 && x >= max2)
            {
                max2 = x;
            }
        }

        cout << max1 + max2 << "\n";
    }

    return 0;
}
