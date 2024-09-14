// #include <bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int n, q;
//     cin >> n >> q;
//     vector<int> v(n);

//     for(int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     while(q--)
//     {
//         int x;
//         cin >> x;
//         auto it = lower_bound(v.begin(), v.end(), x);

//         if(it != v.end()) cout << it - v.begin() + 1 << endl;
//         else cout << n + 1 << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, q;
    cin >> n >> q;
    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    while(q--)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1, idx = n, mid;
        while(l <= r)
        {
            mid = (l+r) / 2;
            if(a[mid] >= x)
            {
                idx = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }

        cout << idx + 1 << endl;
    }

    return 0;
}

