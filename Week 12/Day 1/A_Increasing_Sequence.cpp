#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        vector<int> ans;
        int x = 1;

        for (int i = 0; i < n; i++)
        {
            while (x == v[i])
            {
                x++;
            }
            ans.push_back(x++);
        }

        cout << ans[n - 1] << endl;
    }
    return 0;
}