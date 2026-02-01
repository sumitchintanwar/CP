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
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 2) {
                cnt++;
            }
        }
        if (cnt % 2 != 0) {
            cout << -1 << "\n";
            continue;
        }

        int need = cnt / 2;
        int prefix = 0;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] == 2) {
                prefix++;
            }
            if (prefix == need) {
                cout << i + 1 << "\n";
                break;
            }
        }
    }
    return 0;
}