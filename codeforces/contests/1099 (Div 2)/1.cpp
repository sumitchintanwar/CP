#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int zero = 0;
    for (int x : nums) {
        if (x == 0) {
            zero++;
        }
    }

    int cnt = 0;
    for (int i = n - zero; i < n; i++) {
        if (nums[i] != 0) {
            cnt++;
        }
    }

    cout << cnt << "\n";

    return 0;
}