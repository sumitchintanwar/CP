#include <bits/stdc++.h>
using namespace std;
using ll = long long;
long long solve(ll s, ll k, ll m)
{

    if (s <= k)
    {
        ll rem = m % k;
        if (rem == 0)
        {
            return s;
        }
        else
        {
            return max(0LL, s - rem);
        }
    }
    else
    {
        ll ind = m / k;
        ll timer = m % k;

        ll init;
        if (ind % 2 == 0)
        {
            init = s;
        }
        else
        {
            init = k;
        }

        return init - timer;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while (t--)
    {
        ll s, k, m;
        cin >> s >> k >> m;
        ll ans = solve(s, k, m);
        cout << ans << endl;
    }

    return 0;
}