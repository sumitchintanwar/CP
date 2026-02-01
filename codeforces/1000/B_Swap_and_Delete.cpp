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

        ll zero = 0;
        ll one = 0;

        for (char ch : s)
        {
            if (ch == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }

        ll size = 0;
        // size of t
        ll n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0' && one)
            {
                one--;
                size++;
            }
            else if (s[i] == '1' && zero)
            {
                zero--;
                size++;
            }
            else
            {
                break;
            }
        }

        cout << n - size << endl;
    }

    return 0;
}
