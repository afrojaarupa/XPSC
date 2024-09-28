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
        for (int i = 0; i < n; i++) 
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int p = (n + 1) / 2 - 1;
        int target = v[p], res = 0;

        for (int i = p; i < n; i++) 
        {
            if (v[i] == target) res++;
        }

        cout << res << endl;
    }

    return 0;
}
