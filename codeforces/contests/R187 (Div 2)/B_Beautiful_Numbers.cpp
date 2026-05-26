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
        ll x;
        cin >> x;
        ll digitSum = getDigitSum(x);
        if (digitSum <= 9)
        {
            cout << "0" << "\n";
            continue;
        }
        string num = to_string(x);
        priority_queue<pair<ll, ll>> pq;

        for (int i = 0; i < num.size(); i++)
        {
            pq.push({num[i] - '0', i + 1});
        }
        ll cnt = 0;
        while (!pq.empty() && digitSum > 9)
        {
            ll temp = pq.top().first;
            ll ind = pq.top().second;
            pq.pop();

            if (ind != 1)
            {
                digitSum -= temp;
                cnt++;
            }
            else if (ind == 1)
            {
                digitSum -= (temp - 1);
                cnt++;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}