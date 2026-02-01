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
        ll n, m, k;
        cin >> n >> m >> k;

        set<ll> robo;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            robo.insert(x);
        }

        set<ll> spikes;
        for (int i = 0; i < m; i++)
        {
            ll x;
            cin >> x;
            spikes.insert(x);
        }

        string s;
        cin >> s;

        ll shift = 0;

        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'L')
            {
                shift--;
            }
            else
            {
                shift++;
            }

            vector<ll> die;
            for (ll s : spikes)
            {
                ll need = s - shift;
                if (robo.count(need))
                {
                    die.push_back(need);
                }
            }

            for (ll x : die)
            {
                robo.erase(x);
            }

            cout << robo.size() << " ";
        }

        cout << "\n";
    }

    return 0;
}
