#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n;
        m = n * (n - 1) / 2;
        vector<int> a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < m; i += --n)
        {
            cout << a[i] << " ";
        }
        cout << a[m - 1] << endl;
    }
}