#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int zeroCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                zeroCount++;
            }
        }

        bool hasZero = false;
        int left = 0;
        int right = n - 1;

        while (left < n && a[left] == 0)
        {
            left++;
        }

        while (right >= 0 && a[right] == 0)
        {
            right--;
        }

        for (int i = left; i <= right; i++)
        {
            if (a[i] == 0)
            {
                hasZero = true;
                break;
            }
        }

        if (zeroCount == n)
        {
            cout << 0 << endl;
        }
        else if (!hasZero)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }

    return 0;
}
