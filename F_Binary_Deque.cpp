#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, n_sum, t_sum = 0;
        cin >> n >> n_sum;
        long long int a[n];
        for(long long int i = 0; i < n; i++)
        {
            cin >> a[i];
            t_sum += a[i];
        }
        if(n_sum == t_sum) cout << "0" << endl;
        else if(t_sum < n_sum) cout << "-1" <<endl;
        else
        {
            bool flag = false;
            long long  int i = 0, j = n-1, cnt =0;
            while(t_sum != n_sum && i != n && j != -1)
            {
                if(a[i] >= a[j] && a[i+1] >= a[j-1])
                {
                    t_sum -= a[i];
                    i++;
                    cnt++;
                }
                else 
                {
                    t_sum -= a[j];
                    j--;
                    cnt++;
                }
            }
            cout << cnt << endl;
        }
    }

    return 0;
}
