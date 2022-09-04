class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
            return s;
        vector<string> st(numRows);
        int j=0;
        bool down = true;
        for(int i=0;i<s.size();i++)
        {
            st[j].push_back(s[i]);
            if(j==numRows-1)
            {
                down=false;
            }
            if(j==0)
            {
                down=true;
            }
            if(down==true)
            {
                j++;
            }
            else
                j--;
        }
        string ans="";
        for(auto i:st)
        {
            ans+=i;
        }
        return ans;
    }
};