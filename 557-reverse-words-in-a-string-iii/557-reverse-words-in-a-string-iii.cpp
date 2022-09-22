class Solution {
public:
    string reverseWords(string s) {
        int i=0,n=s.size();
        
        while(i<n)
        {
            int j=i;
            while(i<n and s[i]!=' ')
            {
                i++;
            }
            reverse(s.begin()+j,s.begin()+i);
            i++;
        }
        return s;
    }
};