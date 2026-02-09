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
        int n, m;
        cin >> n >> m;

        vector<int> v(m);
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<ll> gaps;
        for (int i = 0; i < m - 1; i++)
        {
            gaps.push_back(v[i + 1] - v[i] - 1);
        }
        gaps.push_back(n - v[m - 1] - 1 + v[0]);
        sort(gaps.rbegin(), gaps.rend());

        ll saved = 0;
        ll d = 0;

        for (int i = 0; i < gaps.size(); i++)
        {
            ll curr = gaps[i] - 2 * d;

            if (curr > 0)
            {
                saved++;
                curr -= 2;
                if (curr > 0)
                {
                    saved += curr;
                }
                d += 2;
            }
        }
        cout << n - saved << "\n";
    }

    return 0;
}
