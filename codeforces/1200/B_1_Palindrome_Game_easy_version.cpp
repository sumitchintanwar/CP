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
        ll cnt0 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                cnt0++;
            }
        }
        if (cnt0 % 2 == 0 || cnt0 == 1)
        {
            cout << "BOB" << "\n";
        }
        else
        {
            cout << "ALICE" << "\n";
        }
    }

    return 0;
}
