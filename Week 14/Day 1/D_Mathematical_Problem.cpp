#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        string s;
        cin >> n >> s;

        if (n == 2) cout << stoi(s) << endl;
        else
        {
            long long ans = LLONG_MAX;
            for (int i = 1; i < n; i++)
            {
                vector<int> v;
                for (int j = 0; j < n; j++)
                {
                    if (j != i && j != i - 1)
                    {
                        v.push_back(s[j] - '0');
                    }
                    else
                    {
                        if (j == i) v.push_back((s[j - 1] - '0') * 10 + (s[j] - '0'));
                    }
                }
                if (find(v.begin(), v.end(), 0) != v.end()) ans = 0;
                else
                {
                    long long sum = 0;
                    for (int num : v)
                    {
                        if (num != 1)  sum += num;
                        else sum += 0;
                    }
                    ans = min(ans, max(1LL, sum));
                }
            }
            cout << ans << endl;
    }
}   
    return 0;
}
