#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    while(q--)
    {
        int x;
        cin >> x;
        auto it = upper_bound(v.begin(), v.end(), x);

        if ((it-v.begin()-1 >= 0 && it-v.begin()-1 < n) && (v[it - v.begin() -1] <= x))
        {
            cout << it - v.begin() << endl;
        }
        else cout << 0 << endl;

    }
    
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int n, q;
//     cin >> n >> q;
//     int a[n];

//     for(int i = 0; i < n; i++) cin >> a[i];

//     while(q--)
//     {
//         int x;
//         cin >> x;
//         int l = 0, r = n - 1, idx = -1;
//         while(l <= r)
//         {
//             int mid = (l+r) / 2;
//             if(a[mid] <= x)
//             {
//                 idx = mid;
//                 l = mid + 1;
//             }
//            else r = mid - 1 ;
//         }

//         if(idx == -1) cout << 0 << endl;
//         else cout << idx + 1 << endl;
//     }
//     return 0;
// }
