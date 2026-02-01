
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

        unordered_map<long long, int> freq;
        int mx = 0;

        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            freq[x]++;
            mx = max(mx, freq[x]);
        }

        // If all elements are already equal
        if (mx == n)
        {
            cout << 0 << '\n';
            continue;
        }

        int clones = 0;
        int curr = mx;

        // Count how many times we need to double
        while (curr < n)
        {
            curr *= 2;
            clones++;
        }

        int swaps = n - mx;
        cout << swaps + clones << '\n';
    }

    return 0;
}
