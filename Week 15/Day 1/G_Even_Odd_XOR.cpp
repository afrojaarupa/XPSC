#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        int x = 0, y = 0;
        for(int i = 0; i < n-2; i++)
        {
            x^=i;
            y^=(i+1);
        }
        ll add = ((ll) 1 << 31 ) - 1;
        if(x != 0)
        {
            for(int i = 0; i < n-2; i++)
            {
                cout << i << " ";
            }
            x^=add;
            cout << add << " " << x << endl;
        }
        else
        {
            for(int i = 1; i <= n-2; i++)
            {
                cout << i << " ";
            }
            y^=add;
            cout << add << " " << y << endl;
        }
    }
    
    return 0;
}
