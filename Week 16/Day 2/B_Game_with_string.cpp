#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin >> s; 
    int ans = 0;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i - 1] == s[i])
        {
            ans++;
            s.erase(s.begin() + i - 1); 
            s.erase(s.begin() + i - 1); 
            i = max(0, i - 2);
        }
    }

    if(ans % 2 != 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}
