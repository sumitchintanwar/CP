#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> entries;
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        
        int curr = x;
        int d = 0;
        
        bool seen_1 = false;
        bool seen_2 = false;
        
        while (true) {
            bool already_seen = false;
            if (curr == 1 && seen_1) already_seen = true;
            if (curr == 2 && seen_2) already_seen = true;
            
            if (!already_seen) {
                entries.push_back({curr, d});
                if (curr == 1) seen_1 = true;
                if (curr == 2) seen_2 = true;
            } else {
                break;
            }
            
            if (curr % 2 == 0) {
                curr /= 2;
            } else {
                curr += 1;
            }
            d++;
        }
    }
    
    sort(entries.begin(), entries.end());
    
    long long ans = -1;
    int m = entries.size();
    
    for (int i = 0; i < m; ) {
        int j = i;
        long long current_sum = 0;
        
        while (j < m && entries[j].first == entries[i].first) {
            current_sum += entries[j].second; 
            j++;
        }
        
        int count = j - i;
        
        if (count == n) {
            if (ans == -1 || current_sum < ans) {
                ans = current_sum;
            }
        }
        
        i = j;
    }
    
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}