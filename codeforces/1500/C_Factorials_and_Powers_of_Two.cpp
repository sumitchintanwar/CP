#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    cin >> t;
    vector<ll> fact;
    ll currFact = 6;
    ll i = 4;
    while (currFact <= 1000000000000LL)
    {
        fact.push_back(currFact);
        currFact *= i;
        i++;
    }
    while (t--)
    {
        ll n;
        cin >> n;

        ll res = LLONG_MAX;
        int size = fact.size();

        for (int mask = 0; mask < (1 << size); mask++)
        {
            ll currFact = 0;
            ll factCount = 0;

            for (int i = 0; i < size; i++)
            {
                if ((mask >> i) & 1)
                {
                    currFact += fact[i];
                    factCount++;
                }
            }

            if (currFact <= n)
            {
                ll rem = n - currFact;
                ll terms = factCount + __builtin_popcountll(rem);
                res = min(res, terms);
            }
        }

        cout << res << "\n";
    }

    return 0;
}
