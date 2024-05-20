#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) 
    {
        int x, y;
        cin >> x >> y;

        int s2 = (y + 1) / 2; 
        int rem = s2 * 15 - y * 4; 

        x = max(0, x - rem);

        int s1 = (x + 14) / 15;

        cout << s1 + s2 << endl;
    }

    return 0;
}
