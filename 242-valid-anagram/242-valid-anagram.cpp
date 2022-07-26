class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        unordered_map<char,int> mps;
        for(auto i:s)
        {
            mps[i]++;
        }
        unordered_map<char,int> mpt;
        for(auto i:t)
        {
            mpt[i]++;
        }
        for(auto i:mps)
        {
            if(mps[i.first]!=mpt[i.first])
                return false;
        }
        return true;
    }
    
};