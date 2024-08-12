#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    long long x, a, b, e, count = 0;
        cin >> x;

        e = x;        
        while(e > 1)
        {
            e = e/2;
            count++;
        }
        b = pow(2, count);
        a = x - b;
        cout << a << " " << b << endl;
	}

    return 0;
}
