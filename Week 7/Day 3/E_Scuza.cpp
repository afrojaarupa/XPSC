//  Problem Link: https://codeforces.com/contest/1742/problem/E

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        vector<long long> height;
        height.push_back(0);
        vector<int> max_height;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            height.push_back(height.back()+x);
            
            if(i == 0) max_height.push_back(x);
            else  max_height.push_back(max(max_height.back(), x));
        }
        for(int i = 0; i < q; i++)
        {
            int k;
            cin >> k;
            int ind = upper_bound(max_height.begin(), max_height.end(), k)-max_height.begin();
            cout << height[ind] << " ";
            
        }
        cout << endl;
    }

    return 0;
}
