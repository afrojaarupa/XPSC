#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, x, total_sum, actual_sum = 0;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        actual_sum += x;
    }

    total_sum = (n * (n + 1)) / 2;
    cout << (total_sum - actual_sum) << endl;

    return 0;
}
