#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> t(q);
    for (int i = 0; i < q; i++)
    {
        cin >> t[i];
    }

    vector<int> pos(51, INT_MAX);

    for (int i = 0; i < n; i++)
    {
        pos[a[i]] = min(pos[a[i]], i + 1);
    }

    for (int i = 0; i < q; i++)
    {
        for (int c = 1; c <= 50; c++)
        {
            if (pos[c] < pos[t[i]])
            {
                pos[c]++;
            }
        }
        cout << pos[t[i]] << " ";
        pos[t[i]] = 1;
    }

    cout << endl;
    return 0;
}
