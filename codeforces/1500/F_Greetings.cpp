#include <bits/stdc++.h>
using namespace std;

using ll = long long;

long long helper(vector<int> &arr, int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    vector<int> arr1(n1);
    vector<int> arr2(n2);
    for (int i = 0; i < n1; i++)
    {
        arr1[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++)
    {
        arr2[j] = arr[m + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = l;
    long long inversions = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else
        {
            arr[k++] = arr2[j++];
            inversions += n1 - i;
        }
    }

    while (i < n1)
    {
        arr[k++] = arr1[i++];
    }

    while (j < n2)
    {
        arr[k++] = arr2[j++];
    }

    return inversions;
}

long long mergeSort(vector<int> &arr, int l, int r)
{
    long long inversions = 0;
    if (l < r)
    {
        int m = l + (r - l) / 2;
        inversions += mergeSort(arr, l, m);
        inversions += mergeSort(arr, m + 1, r);
        inversions += helper(arr, l, m, r);
    }
    return inversions;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<pair<int, int>> temp(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> temp[i].first >> temp[i].second;
        }

        sort(temp.begin(), temp.end());

        vector<int> b(n);
        for (int i = 0; i < n; ++i)
        {
            b[i] = temp[i].second;
        }

        long long res = mergeSort(b, 0, n - 1);

        cout << res << "\n";
    }

    return 0;
}
