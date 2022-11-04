class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int ans=0;
        unordered_map<string,int>mp;
        for(int i=0;i<words.size();i++)
        {
            string r=words[i];
            reverse(r.begin(),r.end());
            if(mp[r]>0)
            {
                ans+=4;
                mp[r]--;
            }
            else
            {
                mp[words[i]]++;
            }
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->first[0]==it->first[1] && it->second>0)
            {
                ans+=2;
                break;
            }
        }
        return ans;
    }
};