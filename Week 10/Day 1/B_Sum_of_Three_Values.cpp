#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> arr;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        arr.push_back({a, i});
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        int j = 0, k = n - 1;
        while (j != k)
        {
            long long target, right_sum;
            target = x - arr[i].first;
            right_sum = arr[j].first + arr[k].first;
            if (j != i && k != i && target == right_sum)
            {
                cout << arr[i].second << " " << arr[j].second << " " << arr[k].second << endl;
                return 0;
            }

            if (right_sum < target)
                j++;
            else
                k--;
        }
    }
    cout << "IMPOSSIBLE" << endl;

    return 0;
}