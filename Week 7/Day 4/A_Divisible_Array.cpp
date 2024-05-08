#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) 
    {
    	int p_num;
    	cin >> p_num;
    	for (int i = 1; i <= p_num; i++) 
        {
            cout << i*2 << " ";
        }
    	cout << endl;
    }

    return 0;
}