#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, q;
        cin >> n >> q;

        long long int arr[n], brr[q];
        for (long long int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (long long int i = 0; i < q; i++)
        {
            cin >> brr[i];
        }

        set<long long int> unique;
        for (long long int i = 0; i < q; i++)
        {
            if (unique.count(brr[i])) continue;
                

            unique.insert(brr[i]);
            for (long long int j = 0; j < n; j++)
            {
                if (arr[j] % (1 << brr[i]) == 0)
                {
                    arr[j] += (1 << (brr[i] - 1));
                }
            }
        }

        for (auto i : arr)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}