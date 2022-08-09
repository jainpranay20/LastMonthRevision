class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,res=0;
        unordered_set<char> st;
        while(j<s.size())
        {
            if(st.find(s[j])!=st.end())
            {
                while(s[i]!=s[j] and i<j)
                {
                    st.erase(s[i]);
                    i++;
                }
                i++;
                j++;
            }
            else
            {
                st.insert(s[j]);
                res=max(res,j-i+1);
                j++;
            }
        }
        return res;
    }
};