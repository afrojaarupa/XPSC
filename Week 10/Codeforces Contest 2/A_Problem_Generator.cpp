#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, m, ans = 0;
        string s; 
        cin >> n >> m >> s;

        unordered_map<char, int> freq;

        for (char c: s)
        {
            freq[c]++;
        }

        for (char c = 'A'; c <= 'G'; c++)
        {
            if (freq[c] < m) ans += m - freq[c];
            
        }
        
        cout << ans << endl;
    }

    
    
    return 0;
}
