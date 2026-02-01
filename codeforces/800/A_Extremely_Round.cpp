#include <bits/stdc++.h>
using namespace std;

bool check(long long x)
{
    int zeroes = 0;
    int digits = 0;
    while (x)
    {
        if (x % 10 == 0)
        {
            zeroes++;
        }
        x = x / 10;
        digits++;
    }
    return digits - 1 == zeroes;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<long long> temp;
    for (long long i = 1; i <= 999999; i++)
    {
        if (check(i) == true)
        {
            temp.push_back(i);
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        long long res = 0;
        for (int i = 0; i < temp.size(); i++)
        {
            if (temp[i] <= n)
            {
                res++;
            }
            else
            {
                break;
            }
        }
        cout << res << endl;
    }
    return 0;
}