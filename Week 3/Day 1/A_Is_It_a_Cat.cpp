// Problem Link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/E

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s;
        vector<char> v;
        cin >> n >> s;
        for(int i = 0; i < n; i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = s[i] + 32;
            }
            v.push_back(s[i]);
        }
        auto it = unique(v.begin(),v.end());
        v.resize(distance(v.begin(),it));
        string ans = "NO";
        if(v.size() == 4)
        {
            if(v[0] == 'm' && v[1] == 'e' && v[2] == 'o' && v[3] == 'w') 
            {
                ans = "YES";
            }
        }
        cout << ans << endl;
    }

    return 0;
}
