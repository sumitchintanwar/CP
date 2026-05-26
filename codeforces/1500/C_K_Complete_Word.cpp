#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int res = 0;
    int numBlocks = n / k;

    for (int i = 0; i < k / 2; i++) {
        vector<int> freq(26, 0);
        
        for (int c = 0; c < numBlocks; c++) {
            freq[s[c * k + i] - 'a']++;              
            freq[s[c * k + (k - 1 - i)] - 'a']++;     
        }
        
        int maxFreq = *max_element(freq.begin(), freq.end());
        
        int totalChars = 2 * numBlocks;
        res += totalChars - maxFreq;
    }

    if (k % 2 != 0) {
        int mid = k / 2;
        vector<int> freq(26, 0);
        
        for (int c = 0; c < numBlocks; c++) {
            freq[s[c * k + mid] - 'a']++;
        }
        
        int maxFreq = *max_element(freq.begin(), freq.end());
        int totalChars = numBlocks; 
        res += totalChars - maxFreq;
    }

    cout << res << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
