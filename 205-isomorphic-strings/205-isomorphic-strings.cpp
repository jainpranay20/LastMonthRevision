class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())
            return false;
        unordered_map<char,char> mp;
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]!=0)
            {
                if(mp[s[i]]!=t[i] )
                    return false;
            }
            mp[s[i]]=t[i];
        }
        unordered_map<char,char> mp1;
        for(int i=0;i<s.size();i++)
        {
            if(mp1[t[i]]!=0)
            {
                if(mp1[t[i]]!=s[i] )
                    return false;
            }
            mp1[t[i]]=s[i];
        }
        return true;
    }
};