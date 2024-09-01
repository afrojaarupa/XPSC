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
        vector<int> v(n), x(n, 0);
        
        for (int i = 0; i < n; i++) 
        {
            cin >> v[i];
        }

        int temp = 0;
        for (int i = n - 1; i >= 0; i--) 
        {
            temp = max(temp, v[i]);
            if (temp > 0) 
            {
                x[i] = 1;
                temp--;
            }
        }

        for (int i = 0; i < n; i++) 
        {
            cout << x[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
