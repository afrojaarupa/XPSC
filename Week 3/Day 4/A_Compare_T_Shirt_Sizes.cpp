// Problem Link: https://codeforces.com/problemset/problem/1741/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a >> b;
        
        int n = a.size(), k = b.size();

        char x = a[n-1];
        char y = b[k-1];
        char ans;

        if (x == y)
        {
            if (a > b )
            {
                ans = x == 'S' ?  '<' : '>';
            }else if(a < b){
                ans = x == 'S' ?  '>' : '<';
            }else{
                ans = '=';
            } 

        }else if(x == 'S' && (y == 'L' || y == 'M' )){
            ans = '<';
        }else if(y == 'S' && (x == 'L' || x == 'M' )){
            ans = '>';
        }else if(x == 'L' && (y == 'S' || y == 'M' )){
            ans = '>';
        }else if(y == 'L' && (x == 'S' || x == 'M' )){
            ans = '<';
        }
        

        cout << ans << endl;
    }

    return 0;
}
