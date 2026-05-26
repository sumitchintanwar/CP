#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<ll> a;
int n;

map<tuple<int, int, ll, ll>, bool> dp;
map<tuple<int, int, ll, ll>, bool> vis;

bool dfs(int idx, int prevTaken, ll L, ll R) {
    if (L > R) return false;
    if (idx == n) return true;

    auto state = make_tuple(idx, prevTaken, L, R);

    if (vis[state])
        return dp[state];

    vis[state] = true;

    ll prev = a[idx - 1];
    bool possible = false;

    // Case 1: current NOT increased
    {
        ll curr = a[idx];
        ll newL = L, newR = R;

        if (!prevTaken) {
            if (prev <= curr) {
                possible |= dfs(idx + 1, 0, newL, newR);
            }
        } else {
            // prev + k <= curr
            newR = min(newR, curr - prev);

            if (newL <= newR) {
                possible |= dfs(idx + 1, 0, newL, newR);
            }
        }
    }

    // Case 2: current increased
    {
        ll curr = a[idx];
        ll newL = L, newR = R;

        if (!prevTaken) {
            // prev <= curr + k
            newL = max(newL, prev - curr);

            if (newL <= newR) {
                possible |= dfs(idx + 1, 1, newL, newR);
            }
        } else {
            // prev+k <= curr+k
            if (prev <= curr) {
                possible |= dfs(idx + 1, 1, newL, newR);
            }
        }
    }

    return dp[state] = possible;
}

void solve() {
    cin >> n;
    a.resize(n);

    for (auto &x : a)
        cin >> x;

    dp.clear();
    vis.clear();

    bool ans =
        dfs(1, 0, 1, 1e18) || // first element not increased
        dfs(1, 1, 1, 1e18);   // first element increased

    cout << (ans ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}