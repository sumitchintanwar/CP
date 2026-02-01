#include <bits/stdc++.h>
using namespace std;
bool isFound(vector<int> &a, int k, int n)
{
    for(int i : a) {
        if (i == k) {
            return true;
        }
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (isFound(a, k, n))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}