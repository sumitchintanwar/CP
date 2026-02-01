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

        string s;
        cin >> s;

        ll cons = 1;
        ll ans = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                cons++;
            }
            else
            {
                cons = 1;
            }
            ans = max(ans, cons);
        }
        cout << ans + 1 << endl;
    }

    return 0;
}
