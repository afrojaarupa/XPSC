#include<bits/stdc++.h>
using namespace std;
int main() 
{
    
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;

        long long int amax = 0, bmax=0, cnt=0;
        for (int i = 0; i < n; i++)
        {
            long long int x; cin >> x;
            if (x == 0)
            {
                amax = max(cnt, amax);
                cnt = 0;
            }else{
                cnt++;
            }
            
        }
        amax = max(cnt, amax);
        cnt = 0;
        for (int i = 0; i < n; i++)
        {
            long long int x; cin >> x;
            if (x == 0)
            {
                bmax = max(cnt, bmax);
                cnt = 0;
            }else{
                cnt++;
            }
            
        }
        bmax = max(cnt, bmax);
        string ans;
        if (amax > bmax)
        {
            ans = "Om";  
        }else if(amax < bmax){
            ans = "Addy";
        }else{
            ans = "Draw";
        }

        cout << ans << endl;
    }
    
    

    return 0;
}

