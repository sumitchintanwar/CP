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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;
        int cnt = 0;
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            mpp[s[i]]++;
        }
        for (auto [el, count] : mpp)
        {
            if (count % 2 == 1)
            {
                cnt++;
            }
        }
        if (cnt > k + 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << "\n";
        }
    }

    return 0;
}
