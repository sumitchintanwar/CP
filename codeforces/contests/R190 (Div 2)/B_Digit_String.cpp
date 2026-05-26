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

        ll cnt1 = 0;
        for (char c : s)
        {
            if (c == '1' || c == '3')
            {
                cnt1++;
            }
        }
        ll n = s.size();

        ll maxi = cnt1;
        
        ll left1 = 0;
        ll left2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '2')
            {
                left2++;
            }
            else if (s[i] == '1' || s[i] == '3')
            {
                left1++;
            }
            ll right1 = cnt1 - left1;
            ll curr = left2 + right1;
            maxi = max(maxi, curr);
        }

        cout << n - maxi << "\n";
    }

    return 0;
}
