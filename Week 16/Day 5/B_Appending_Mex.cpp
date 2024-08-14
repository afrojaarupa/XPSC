#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    int a, n, m = -1;
	cin >> n;
    
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a > m + 1)
		{
			cout << i + 1;
			return 0;
		}
		m = max(m, a);
	}

	cout << -1;

	return 0;
}