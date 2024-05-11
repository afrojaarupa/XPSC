// Problem Link: https://codeforces.com/problemset/problem/1582/C

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

        int ans = n + 1;

        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            int left = 0, right = n - 1, cnt = 0;

            while (left <= right)
            {
                if (s[left] == s[right])
                {
                    left++;
                    right--;
                }
                else if (s[left] == ch)
                {
                    cnt++;
                    left++;
                }
                else if (s[right] == ch)
                {
                    cnt++;
                    right--;
                }
                else
                {
                    cnt = n + 1;
                    break;
                }
            }

            ans = min(ans, cnt);
        }

        if (ans == n + 1)
            ans = -1;

        cout << ans << '\n';
    }

    return 0;
}
