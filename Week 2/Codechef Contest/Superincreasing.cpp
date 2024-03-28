#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        long long int a[n+1];
        a[1] = 1;
        a[2] = 2;
        for(int i = 3; i <= n; i++)
        {
            a[i] = a[i-1] + a[i-2];
        }

        

        if(x >= a[k]) cout << "Yes" << endl;
        else cout << "No" << endl;
        
    }

    return 0;
}
