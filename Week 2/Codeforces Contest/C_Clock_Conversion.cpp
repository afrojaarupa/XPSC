#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        stringstream ss(s);
        int hours, minutes;
        char delimiter = ':';

        ss >> hours >> delimiter >> minutes;

        if (hours < 12)
        {
            if(hours == 0) hours = 12;
            printf("%02d:%02d AM\n", hours, minutes);
        }else{
            if (hours > 12) hours -= 12;
            printf("%02d:%02d PM\n", hours, minutes);
        }
        
   
    }
    
    
    return 0;
}
