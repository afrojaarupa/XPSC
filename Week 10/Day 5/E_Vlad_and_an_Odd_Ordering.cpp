#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, N;
        cin >> n >> k;
        N = n;
        vector<int> v;
        while (n != 0) 
        {
            v.push_back((n + 1) / 2);
            n /= 2;
        }
        int sum = 0, p = 1;
        for (int i = 0; i < N; i++) 
        {
            if (sum < k && k <= sum + v[i]) 
            {
                cout << p * (2 * (k - sum) - 1) << endl;
                break;
            }
            sum += v[i];
            p *= 2;
        }
    }
    
    return 0;
}
