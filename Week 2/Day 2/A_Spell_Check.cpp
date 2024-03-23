// Problem Link: https://codeforces.com/problemset/problem/1722/A

#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    map<char, int> mp_org;
    string name = "Timur";
    for (int i = 0; i < 5; i++)
    {
        mp_org[name[i]]++;
    }
    

    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n != 5)
        {
            cout << "NO" << endl;
            continue;
        }

        map<char, int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        bool flag = true;
        for (int i = 0; i < 5; i++)
        {
            char ch = s[i];
            if (mp[ch] != mp_org[ch])
            {
                flag = false;
                break;
            }
            
        }
        if (flag)
        {
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }

    return 0;
}
