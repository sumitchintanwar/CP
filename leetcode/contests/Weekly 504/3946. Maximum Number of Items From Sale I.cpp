#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumSaleItems(vector<vector<int>> &items, int budget)
    {
        int n = items.size();
        vector<int> gain(n, 0);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j && items[j][0] % items[i][0] == 0)
                {
                    gain[i]++;
                }
            }
        }

        vector<int> dp(budget + 1, 0);

        for (int i = 0; i < n; i++)
        {
            int cost = items[i][1];
            int val = gain[i] + 1;

            for (int b = budget; b >= cost; b--)
            {
                dp[b] = max(dp[b], dp[b - cost] + val);
            }

            for (int b = cost; b <= budget; b++)
            {
                dp[b] = max(dp[b], dp[b - cost] + 1);
            }
        }

        return *max_element(dp.begin(), dp.end());
    }
};

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> items(n, vector<int>(2));

    for (int i = 0; i < n; i++)
    {
        cin >> items[i][0] >> items[i][1];
    }

    int budget;
    cin >> budget;

    Solution sol;
    cout << sol.maximumSaleItems(items, budget) << '\n';

    return 0;
}