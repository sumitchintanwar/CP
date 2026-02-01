#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    if (n == 2 || n == 3)
    {
        return n;
    }
    if (n % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int ans = solve(n);
        cout << ans << endl;
    }

    return 0;
}
