#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n;
    cin >> n;

    string a;
    cin >> a;

    string b;
    cin >> b;

    vector<int> A;
    vector<int> B;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
        {
            A.push_back(i);
        }

        if (b[i] == '1')
        {
            B.push_back(i);
        }
    }
    if (A.size() != B.size())
    {
        cout << -1 << '\n';
        return;
    }

    int res = 0;

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] != B[i])
        {
            res++;
        }
    }

    cout << res << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
