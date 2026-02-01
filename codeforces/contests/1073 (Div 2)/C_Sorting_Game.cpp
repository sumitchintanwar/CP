#include <bits/stdc++.h>
using namespace std;

using ll = long long;
bool isSorted(string s)
{
    int n = s.size();
    for (int i = 1; i < n; i++)
    {
        if (s[i] < s[i - 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        if (isSorted(s))
        {
            cout << "Bob\n";
        }
        else
        {
            cout << "Alice\n";
            ll zero = 0;
            vector<ll> temp;
            for (ll i = 0; i < n; i++)
            {
                if (s[i] == '0')
                {
                    zero++;
                }
            }

            for (ll i = 0; i < zero; i++)
            {
                if (s[i] == '1')
                {
                    temp.push_back(i + 1);
                }
            }
            for (ll i = zero; i < n; i++)
            {
                if (s[i] == '0')
                {
                    temp.push_back(i + 1);
                }
            }
            ll size = temp.size();
            cout << size << endl;
            for (ll i = 0; i < size; i++)
            {
                cout << temp[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
