#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a >> b;
        int x = ((a[0]-48) * 10) + (a[1]-48);
        int y = ((b[0]-48) * 10) + (b[1]-48);

        int m = ((a[1]-48) * 10) + (a[0]-48);
        int n = ((b[1]-48) * 10) + (b[0]-48);

        string ans = "No";

        if (x > y || m > y || m > n || x > n || n < x)
        {
            ans = "Yes";
        }

        cout << ans << endl;
    }

    return 0;
}
