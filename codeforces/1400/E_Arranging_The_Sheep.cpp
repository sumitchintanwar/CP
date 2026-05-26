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

        vector<ll> sheeps;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                sheeps.push_back(i);
            }
        }
        if (sheeps.empty())
        {
            cout << 0 << "\n";
            continue;
        }
        ll ind = (sheeps.size() - 1) / 2;
        ll median = sheeps[ind];
        ll base = median - ind;
        ll res = 0;
        for (int i = 0; i < sheeps.size(); i++)
        {
            res += abs(sheeps[i] - (base + i));
        }
        cout << res << "\n";
    }

    return 0;
}
