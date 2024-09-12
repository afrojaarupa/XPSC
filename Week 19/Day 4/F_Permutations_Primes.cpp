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
        int a[n + 1] = {0};
        
        if (n == 1)
        {
            cout << "1" << endl;
            continue;
        }
        
        if (n == 2)
        {
            cout << "1 2" << endl;
            continue;
        }

        int m = 4;
        a[1] = 2;
        a[n] = 3;
        a[(n + 1) / 2] = 1;
        
        for (int i = 2; i < n; i++)
        {
            if (a[i] == 0)
            {
                a[i] = m;
                m++;
            }
        }
        
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
            
        cout << endl;
    }

    return 0;
}
