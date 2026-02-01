#include <iostream>
using ll = long long;
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        for (ll i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}