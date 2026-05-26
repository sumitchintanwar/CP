#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll calculate(vector<ll> temp)
{
    int n = temp.size();
    ll res = 0;
    sort(temp.rbegin(), temp.rend());
    for (int i = 0; i < n; i++)
    {
        res += (n - 1 - 2 * i) * temp[i];
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    // cin >> t;
    while (t--)
    {

        int n, m;
        cin >> n >> m;

        vector<vector<ll>> mat(n, vector<ll>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        vector<vector<ll>> row(100001);
        vector<vector<ll>> col(100001);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                row[mat[i][j]].push_back(i);
                col[mat[i][j]].push_back(j);
            }
        }
        ll res = 0;
        for (int i = 1; i <= 100000; i++)
        {
            res += calculate(row[i]) + calculate(col[i]);
        }
        cout << res << "\n";
    }

    return 0;
}
