#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> v;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            
            
        }

        
        f = v[f-1];
        sort(v.begin(), v.end(), greater<int>());

        int left_i = n, right_i = 0;

        for (int i = 0; i < k; i++)
        {
            if (v[i] == f)
            {
                left_i = i;
            }
            
        }

        for (int i = k; i < n; i++)
        {
            if (v[i] == f)
            {
                right_i = i;
            }
            
        }

        string ans = "MAYBE";

        if(right_i < k){
            ans = "YES";
        }else if (left_i >= k ){
            ans = "NO";
        }

        cout << ans << endl;
        
        
    }
    
    return 0;
}
