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

        long long sum = 0;
        vector<long long> v(n);

        for (int i = 0; i < n; i++) 
        {
            cin >> v[i];
            sum += v[i];
        }

        sort(v.begin(), v.end());

        if (n < 3) cout << "-1" << endl;
        else cout << max(0LL, v[n / 2] * 2 * n - sum + 1) <<  endl;
        
    }

    return 0;
}
