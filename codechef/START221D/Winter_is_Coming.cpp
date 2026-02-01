#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int N, A, B;
        cin >> N >> A >> B;
        vector<int> a(N);
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        int cnt = 0;
        bool wear = false;
        for (int i = 0; i < N; i++)
        {
            if (a[i] < A && !wear)
            {
                wear = true;
                cnt++;
            }

            else if (B < a[i])
            {
                wear = false;
            }
        }

        cout << cnt << endl;
    }
}
