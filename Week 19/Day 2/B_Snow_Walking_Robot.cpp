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
        
        map<char, int> cnt;
        cnt['L'] = 0, cnt['R'] = 0, cnt['U'] = 0, cnt['D'] = 0;

        for (int i = 0; i < s.size(); i++) cnt[s[i]]++;


        int v = min(cnt['U'], cnt['D']);
        int h = min(cnt['L'], cnt['R']);
        
        if (v == 0 || h == 0) 
        {
            if (v == 0 && h > 0) h = 1;
            else if (h == 0 && v > 0) v = 1;

            cout << 2 * max(h, v) << endl;

            if (h) cout << string(h, 'L') + string(h, 'R') << endl;
            if (v) cout << string(v, 'U') + string(v, 'D') << endl;
        } 
        else 
        {
            string res = string(h, 'L') + string(v, 'U') + string(h, 'R') + string(v, 'D');
            cout << res.size() << endl << res << endl;
        }
    }

    return 0;
}
