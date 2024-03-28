#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t; cin >> t;
    while (t--)
    {
        int a, b , c;
        cin >> a >> b >> c;

        string ans = "NONE";

        if(a < b && b < c){
            ans = "STAIR";
        }else if(a < b && b > c){
            ans = "PEAK";
        }

        cout << ans << endl;
    }
    
    
    return 0;
}
