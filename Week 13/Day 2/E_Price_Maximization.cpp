#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, k;
        cin >> n >> k;
        
        vector<ll> a(n);
        ll sum = 0;
        
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            sum += a[i] / k;
            a[i] %= k;
        }
        
        sort(a.begin(), a.end(), greater<ll>());
        
        int i = 0, j = n - 1;
        
        while (i < j) 
        {
            while (i < j && a[i] + a[j] < k) 
            {
                j--;
            }
            
            if (i < j) 
            {
                sum++;
                i++;
                j--;
            }
        }
        
        cout << sum << endl;
    }
    
    return 0;
}
