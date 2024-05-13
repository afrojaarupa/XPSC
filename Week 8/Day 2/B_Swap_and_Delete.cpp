// Problem Link: https://codeforces.com/problemset/problem/1913/B

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        vector<int> v;
        v.push_back(0);
        v.push_back(0);
        for (int i = 0; i < s.length(); i++) v[s[i] - '0']++;
        
        for (int i = 0; i <= s.length(); i++) 
        {
            if (i == s.length() || v[1 - (s[i] - '0')] == 0) 
            {
                cout << s.length() - i << endl;
                break;
            }
            else v[1 - (s[i] - '0')]--;
        }
    }
    return 0;
}