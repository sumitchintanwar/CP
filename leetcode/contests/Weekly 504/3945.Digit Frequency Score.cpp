#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int digitFrequencyScore(int n)
    {
        int res = 0;
        while (n > 0)
        {
            int d = n % 10;
            res += d;
            n /= 10;
        }
        return res;
    }
};

int main()
{
    int n;
    cin >> n;

    Solution sol;
    cout << sol.digitFrequencyScore(n) << '\n';

    return 0;
}