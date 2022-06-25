class Solution {
public:
    int countAsterisks(string s) {
        int count=0,total=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='|')
            {
                count=(count+1)%2;
            }
            if(s[i]=='*' and count==0)
            {
                total++;
            }
        }     
        return total;
    }
};