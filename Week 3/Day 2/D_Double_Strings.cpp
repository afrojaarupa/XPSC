// Problem Link: https://codeforces.com/problemset/problem/1703/D

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> s(n);
        map<string, int> mp;
        vector<int> ans(n);
        for(int i = 0; i < n; i++)
        {
            cin >> s[i];
            mp[s[i]]++;
        }
        for(int i = 0; i < n; i++)
        {
            string word = s[i];
            for(int j = 1; j < word.size(); j++)
            {
                string a = word.substr(0, j);
                string b = word.substr(j, word.size()-j);

                if (mp[a] != 0 && mp[b] != 0)
                {
                    ans[i] = 1;
                }
            }
        }

        for(int i = 0; i < n; i++)
        {
            cout << ans[i];
        }
        cout << endl;
    }
    
    
    return 0;
}