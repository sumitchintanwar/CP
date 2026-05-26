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

        vector<vector<ll>> blogs(n);

        for (int i = 0; i < n; i++)
        {
            ll size;
            cin >> size;

            vector<ll> temp(size);
            for (int j = 0; j < size; j++)
            {
                cin >> temp[j];
            }
            set<ll> st;
            for (int j = size - 1; j >= 0; j--)
            {
                if (!st.count(temp[j]))
                {
                    st.insert(temp[j]);
                    blogs[i].push_back(temp[j]);
                }
            }
        }

        vector<bool> blog(n, false);
        set<ll> used;
        vector<ll> res;

        for (int ind = 0; ind < n; ind++)
        {
            ll bestInd = -1;
            vector<ll> best;

            for (ll i = 0; i < n; i++)
            {
                if (blog[i])
                {
                    continue;
                }
                vector<ll> curr;

                for (int val : blogs[i])
                {
                    if (!used.count(val))
                    {
                        curr.push_back(val);
                    }
                }

                if (bestInd == -1 || curr < best)
                {
                    bestInd = i;
                    best = curr;
                }
            }

            blog[bestInd] = true;

            for (ll val : best)
            {
                res.push_back(val);
                used.insert(val);
            }
        }

        for (ll val : res)
        {
            cout << val << " ";
        }
        cout << "\n";
    }

    return 0;
}
