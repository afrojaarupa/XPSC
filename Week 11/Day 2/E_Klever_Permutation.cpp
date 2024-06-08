#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, k;
        cin >> n >> k;
        
        int l = 1, r = n;
        vector<int> v(n);
        
        for (int i = 0; i < k; i++) 
        {
            for (int j = i; j < n; j += k) 
            {
                if (i % 2 == 0) v[j] = l++;
                else v[j] = r--;
            }
        }
        
        for (int x : v) 
        {
            cout << x << " ";
        }
        cout << endl;
    }
    
    return 0;
}
