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
        ll n;
        cin >> n;

        vector<ll> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        int req = n;

        for (int i = 0; i < n; i++)
        {
            if (p[i] == req)
            {
                req--;
            }
            else
            {
                int ind = -1;
                for (int j = i + 1; j < n; j++)
                {
                    if (p[j] == req)
                    {
                        ind = j;
                        break;
                    }
                }

                reverse(p.begin() + i, p.begin() + ind + 1);
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << p[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
