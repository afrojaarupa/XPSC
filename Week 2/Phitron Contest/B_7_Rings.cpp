#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        
        if((n*x) >= 9999 && (n*x) <= 99999) cout << "YES" <<endl;
        else cout << "NO" << endl;
    }

    return 0;
}
