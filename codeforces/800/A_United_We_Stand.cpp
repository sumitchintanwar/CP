#include <bits/stdc++.h>
using namespace std;

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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b;
        vector<int> c;

        int mx = *max_element(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            if (a[i] != mx)
            {
                b.push_back(a[i]); // Add to b if not the maximum
            }
            else
            {
                c.push_back(a[i]);
            }
        }
        if (b.size() == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << b.size() << " " << c.size() << endl;
            for (int i = 0; i < b.size(); i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
            for (int i = 0; i < c.size(); i++)
            {
                cout << c[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}