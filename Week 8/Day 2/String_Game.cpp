#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;
        
        int zero = 0, one = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0') zero++;
            else one++;
        }
        
        int mn = min(one, zero);
        
        if(mn%2 == 0)  cout << "Ramos" << endl;
        else cout << "Zlatan" << endl;
    }
    
    return 0;
}
