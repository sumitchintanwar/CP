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
        cin >> n ;

        
        string s;
        cin >> s;

        long long i = 0;
        long long j = n - 1;
        long long res = n;
        while (i <= j) {
            if (s[i] != s[j]) {
                res -= 2;
            }
            else {
                break;
            }
            i++;
            j--;
        }
        cout << res << endl;
    }
    return 0;
}