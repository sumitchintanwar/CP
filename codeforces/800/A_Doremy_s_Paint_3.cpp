#include <bits/stdc++.h>
using namespace std;
bool solve(vector<int> &a)
{
    map<int, int> mpp;
    for (int x : a)
        mpp[x]++;

    vector<int> freq;
    for (auto &p : mpp)
    {
        freq.push_back(p.second);
    }

    if (freq.size() <= 2)
    {
        return abs(freq[0] - freq.back()) <= 1;
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
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (solve(a))
        {
            cout << "Yes" << "\n";
        }
        else
        {
            cout << "No" << "\n";
        }
    }
    return 0;
}