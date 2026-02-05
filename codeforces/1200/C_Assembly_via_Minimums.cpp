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

        ll m = n * (n - 1)/2;
        vector<ll> b(m);    
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        int i = 0;
        int x = n - 1;
        while (x > 0) {
            cout << b[i] << " ";
            i += x;
            x--;
        }
        cout << "1000000000" << "\n";
    }

    return 0;
}
