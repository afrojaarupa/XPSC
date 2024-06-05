#include <bits/stdc++.h>
using namespace std;

bool bit(int mask, int pos) 
{
    return (mask >> pos) & 1;
}

int main() 
{    
    int t;
    cin >> t;
    while (t--) 
    {
        int x, p;
        cin >> x;
        vector<int> ans;
        ans.push_back(x);        
        
        for (int i = 0; ; i++) 
        {
            if (bit(x, i)) 
            {
                if (x == (1 << i)) 
                {
                    p = i;
                    break;
                }
                x -= (1 << i);
                ans.push_back(x);
            }
        }
        while (p > 0) 
        {
            x -= (1 << (p - 1));
            ans.push_back(x);
            p--;
        }
        cout << ans.size() << endl;
        for (int y : ans)  cout << y << " ";

        cout << endl;
    }

    return 0;
}