#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll minOperations(string n, string possible)
{
    ll i = possible.size() - 1;
    ll ops = 0;
    ll size = n.size();
    for (ll j = size - 1; j >= 0; j--)
    {
        if (n[j] == possible[i])
        {
            i--;
            if (i < 0)
            {
                break;
            }
        }
        else
        {
            ops++;
        }
    }
    if (i >= 0)
    {
        ops = INT_MAX;
    }
    return ops;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        vector<string> possible = {"00", "25", "50", "75"};
        ll res = INT_MAX;
        for (int i = 0; i < 4; i++)
        {
            res = min(res, minOperations(n, possible[i]));
        }
        cout << res << endl;
    }

    return 0;
}
