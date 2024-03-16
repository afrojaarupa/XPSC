//  Problem Link: https://atcoder.jp/contests/abc071/tasks/abc071_b

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int sz = s.size();
    int frq[sz] = {0};
    for(int i = 0; i < sz; i++)
    {
        frq[s[i] - 'a']++;
    }
    bool flag = false;
    char ans;
    for(char i = 'a'; i <= 'z'; i++)
    {
        if(frq[i - 97] == 0)
        {
            flag = true;
            ans = i;
            break;
        }
    }
    if(flag) cout << ans <<endl;
    else cout << "None" << endl;
    
    return 0;
}
