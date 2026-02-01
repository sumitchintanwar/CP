#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll threes = 0;
        ll twos = 0;

        while (n > 0 && n % 3 == 0)
        {
            threes++;
            n /= 3;
        }

        while (n > 0 && n % 2 == 0)
        {
            twos++;
            n /= 2;
        }

        if (n > 1 || twos > threes)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << threes + (threes - twos) << endl;
        }
    }

    return 0;
}
