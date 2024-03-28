class Solution{
    public:
        int longestKSubstr(string s, int k) {
            int l=0,r=0,ans=-1;
            map<char,int>mp;

            while(r < s.size()) {
                mp[s[r]]++;
                if(mp.size() > k) {
                    mp[s[l]]--;
                    if(mp[s[l]] == 0) mp.erase(s[l]);
                    l++;
                }
                if(mp.size() == k) ans = max(ans, (r-l+1));
                r++;
            }
            return ans;
        }


};