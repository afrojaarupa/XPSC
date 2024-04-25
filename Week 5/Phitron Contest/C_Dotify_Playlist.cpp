#include "bits/stdc++.h"
using namespace std;

int main() {  
    int t; cin >> t;
    while(t--) {
        int n, k, l, len, lang, count = 0;
        cin >> n >> k >> l;

        vector<int> good_songs;

        for (int i = 0; i < n; i++)
        {
            cin >> len >> lang;

            if (l == lang)
            {
                good_songs.push_back(len);
            }
            
        }

        int ans = 0;
        if (good_songs.size() < k)
        {
            ans = -1;
        }else{
            sort(good_songs.begin(), good_songs.end(), greater<int>());
            for (int  i = 0; i < k; i++)
            {
                ans += good_songs[i];
            }
        }

        cout << ans << endl;
    }
}   
