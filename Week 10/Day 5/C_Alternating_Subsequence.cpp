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
        long long sum = 0;
        for (int i = 0; i < n; i++) 
        {
            int cur = v[i];
            int j = i;
            while ((j < n) && ((v[i] > 0 && v[j] > 0) || (v[i] < 0 && v[j] < 0))) 
            {
                cur = max(cur, v[j]);
                j++;
            }
            sum += cur;
            i = j - 1;
        }
        cout << sum << endl;
    }
    return 0;
}
