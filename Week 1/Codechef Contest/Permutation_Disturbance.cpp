#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, count=0;
        cin >> n;
        int a[n+1];
        
        for(int i=1; i<=n; i++){
            cin >> a[i];
        }
        
        for(int i=1; i<=n; i++){
            if (i == a[i])
            {
                swap(a[i], a[i+1]);
                count++;
            } 
        }

        

        cout << count << endl;
    }
    
    return 0;
}
