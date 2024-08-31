#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    vector<int> l(n), r(n), x(n);

    for (int i = 0; i < n; i++) 
    {
        cin >> l[i] >> r[i];
        x[i] = i + 1;
    }

    vector<int> y(n);
    for (int i = 0; i < n; i++) 
    {
        y[i] = i;
    }

    sort(y.begin(), y.end(), [&](int a, int b) 
    {
        if (l[a] != l[b]) return l[a] < l[b];
        return r[a] > r[b];
    });

    int mx_r = -1;
    int mx_y = -1;

    for (int i : y) 
    {
        if (r[i] <= mx_r) 
        {
            cout << x[i] << " " << x[mx_y] << endl;
            return 0;
        }

        if (r[i] > mx_r) 
        {
            mx_r = r[i];
            mx_y = i;
        }
    }

    cout << "-1 -1" << endl;
    
    return 0;
}
