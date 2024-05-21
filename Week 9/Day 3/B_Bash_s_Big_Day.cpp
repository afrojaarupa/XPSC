#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, int> factors;
	
    for(int i = 0; i < n; i++)
	{
		int s;
		cin >> s;

		for(int j = 2; j*j <= s; j++)
		{
			if(s%j == 0) factors[j]++;

			while(s%j == 0) s/= j;
		}

		if(s > 1) factors[s]++; 
	}

	int ans = 1;
	for(auto it = factors.begin(); it != factors.end(); it++)
	{
		ans = max(ans, (*it).second);
	}

	cout << ans << endl;

	return 0;
}