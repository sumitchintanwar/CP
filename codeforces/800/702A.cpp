#include <bits/stdc++.h>
using namespace std;

int maxIncreasingSubarrayLength(const vector<long long>& a) {
    int n = a.size();
    if (n == 0) {
        return 0;
    }
    int ans = 1;
    int curr = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            curr++;
        }
        else {
            curr = 1;
        }
        ans = max(ans, curr);
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int result = maxIncreasingSubarrayLength(a);
    cout << result << '\n';

    return 0;
}
