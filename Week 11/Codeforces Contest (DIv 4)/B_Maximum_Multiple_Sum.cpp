#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, mx = 0, idx, sum;
        cin >> n;

        for(int i = 2; i <= n; i++)
        {
            sum = n;
            for(int j = 2; j <= n; j++)
            {
                if((i*j <= n) && ((i*j)%2 == 0))
                {
                    sum += i*j;
                }
            }
            if(sum >= mx)
            {
                mx = sum;
                idx = i;
            }
            
        }

        cout << idx << endl;
    }
    
    return 0;
}
