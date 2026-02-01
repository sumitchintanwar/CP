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
        ll n, k;
        cin >> n >> k;
        vector<vector<ll>> grid(n, vector<ll>(n, 0));
        ll temp = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> grid[i][j];
            }
        }
        // int r = 0;
        // int i = n - 1;
        // vector<vector<ll>> matrix(n, vector<ll>(n, 0));
        // while (i >= 0 && r < n)
        // {
        //     int j = n - 1;
        //     int c = 0;
        //     while (j >= 0 && c < n)
        //     {
        //         matrix[i][j--] = grid[r][c++];
        //     }
        //     i--;
        //     r++;
        // }
        // ll cnt = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         if (grid[i][j] != matrix[i][j])
        //         {
        //             cnt++;
        //         }
        //     }
        // }
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] != grid[n - 1 - i][n - 1 - j])
                {
                    cnt++;
                }
            }
        }
        cnt /= 2;
        if (cnt <= k && ((k - cnt) % 2 == 0 || n % 2 == 1))
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
