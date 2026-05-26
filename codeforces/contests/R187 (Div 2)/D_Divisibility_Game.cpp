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
        ll n, m;
        cin >> n >> m;

        set<ll> st;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            st.insert(x);
        }

        vector<ll> b(m);
        ll maxi = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            maxi = max(maxi, b[i]);
        }

        vector<int> divi(maxi + 1, 0);

        for (ll x : st)
        {
            if (x <= maxi)
            {
                for (ll i = x; i <= maxi; i += x)
                {
                    divi[i]++;
                }
            }
        }

        ll cnt = st.size();
        ll A = 0;
        ll B = 0;
        ll both = 0;

        for (ll y : b)
        {
            if (divi[y] == cnt)
            {
                A++;
            }
            else if (divi[y] == 0)
            {
                B++;
            }
            else
            {
                both++;
            }
        }

        ll alice = A + (both + 1) / 2;
        ll bob = B + both / 2;

        if (alice > bob)
        {
            cout << "Alice" << "\n";
        }
        else
        {
            cout << "Bob" << "\n";
        }
    }

    return 0;
}