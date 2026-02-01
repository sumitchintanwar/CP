#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int temp = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        temp = min(temp, abs(0 - a[i]));
    }

    cout << temp << endl;
    return 0;
}