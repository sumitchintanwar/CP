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
        ll n, r, b;
        cin >> n >> r >> b;

        ll reds = r / (b + 1);
        ll extra = r % (b + 1);

        string s;
        for (int i = 1; i <= b + 1; i++)
        {
            for (int j = 0; j < reds; j++)
            {
                s += 'R';
            }

            if (extra > 0)
            {
                s += 'R';
                extra--;
            }

            if (i != b + 1)
            {
                s += 'B';
            }
        }

        cout << s << "\n";
    }

    return 0;
}
