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
        cin >> n;

        if (n % 2 == 1)
        {
            cout << "0" << endl;
            continue;
        }

        string s = to_string(n);
        bool odd = false;
        for (char c : s)
        {
            if ((c - '0') % 2 == 1)
            {
                odd = true;
                break;
            }
        }

        if (odd)
        {
            cout << "1" << endl;
            continue;
        }

        if (n < 10)
        {
            cout << "-1" << endl;
            continue;
        }

        bool two = false;
        for (char c : s)
        {
            int digit = c - '0';
            int temp = n - digit;
            string tempS = to_string(temp);
            for (char ch : tempS)
            {
                if ((ch - '0') % 2 == 1)
                {
                    two = true;
                    break;
                }
            }
            if (two)
                break;
        }

        if (two)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "3" << endl;
        }
    }

    return 0;
}