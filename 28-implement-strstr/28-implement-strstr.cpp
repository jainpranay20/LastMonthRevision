class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size();
        for(int i=0;i<haystack.size();i++)
        {
            int j=0;
            if(haystack[i]==needle[j])
            {
               if(needle==haystack.substr(i,n))
                   return i;
            }
        }
        return -1;
    }
};