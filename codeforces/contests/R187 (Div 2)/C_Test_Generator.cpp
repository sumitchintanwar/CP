#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int getDigitSum(ll x)
{
    int sum = 0;
    while (x != 0)
    {
        int digit = x % 10;
        sum += digit;
        x = x / 10;
    }
    return sum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll s, m;
        cin >> s >> m;
        ll temp = m;

        for (int i = 0; i < 61; i++)
        {

        }
    }

    return 0;
}