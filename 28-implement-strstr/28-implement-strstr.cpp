class Solution {
public:
    int strStr(string haystack, string needle) {
        int ne=needle.size();
        int hy=haystack.size();
        
        if(needle.size()==0)
            return 0;
        int j=0;
        for(int i=0;i<hy;i++)
        {
            if(haystack[i]==needle[j])
            {
                j++;
            }
            else{
                i=i-j;
                j=0;
            }
            if(j==ne)
            {
                return i-ne+1;
            }
        }
        return -1;
    }
};


/*
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
*/