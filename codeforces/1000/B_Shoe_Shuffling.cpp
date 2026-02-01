#include <bits/stdc++.h>
using namespace std;

using ll = long long;

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

        vector<ll> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        map<ll, ll> freq;
        for (ll i = 0; i < n; i++)
        {
            freq[s[i]]++;
        }

        ll flag = 0;
        for (auto i : freq)
        {
            if (i.second == 1)
            {
                flag = 1;
                break;
            }
        }

        if (flag)
        {
            cout << -1 << "\n";
            continue;
        }
        vector<ll> students(n);
        for (int i = 0; i < n; i++)
        {
            students[i] = i + 1;
        }
        ll l = 0, r = 0;
        while (r < n)
        {
            if (s[l] == s[r])
            {
                r++;
            }
            else
            {
                // rotate(students.begin() + l, students.begin() + l + 1, students.begin() + r);
                rotate(students.begin() + l,
                       students.begin() + r - 1,
                       students.begin() + r);

                l = r;
            }
        }
        // rotate(students.begin() + l, students.begin() + l + 1, students.begin() + r);
        rotate(students.begin() + l,
               students.begin() + r - 1,
               students.begin() + r);

        for (auto i : students)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
