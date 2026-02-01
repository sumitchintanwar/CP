#include <bits/stdc++.h>
using namespace std;

long long solve(long long a, long long b,
                long long xk, long long yk,
                long long xq, long long yq)
{
    vector<long long> delx = {+a, +a, -a, -a, +b, +b, -b, -b};
    vector<long long> dely = {+b, -b, +b, -b, +a, -a, +a, -a};

    set<pair<long long, long long>> king;
    set<pair<long long, long long>> queen;

    for (int i = 0; i < 8; i++)
    {
        king.insert({xk + delx[i], yk + dely[i]});
        queen.insert({xq + delx[i], yq + dely[i]});
    }

    long long cnt = 0;
    for (auto &p : king)
    {
        if (queen.count(p))
        {
            cnt++;
        }
    }

    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, xk, yk, xq, yq;
        cin >> a >> b;
        cin >> xk >> yk;
        cin >> xq >> yq;

        cout << solve(a, b, xk, yk, xq, yq) << '\n';
    }
    return 0;
}
