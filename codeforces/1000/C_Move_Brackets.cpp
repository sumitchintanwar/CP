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
        ll sum = 0;
        ll ops = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                sum++;
            }
            else
            {
                sum--;
            }
            if (sum < 0)
            {
                ops++;
                sum = 0;
            }
        }
        cout << ops << endl;
    }

    return 0;
}
