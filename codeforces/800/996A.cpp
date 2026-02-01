#include <bits/stdc++.h>
using namespace std;

int solution(long long n, vector<int> &nums)
{
    int bills = 0;

    for (int num : nums)
    {
        bills += n / num;
        n = n % num;
    }
    return bills;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    vector<int> nums = {100, 20, 10, 5, 1};
    int result = solution(n, nums);
    cout << result << '\n';

    return 0;
}
