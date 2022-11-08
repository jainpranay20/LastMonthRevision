class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else if(st.top()-32==s[i] or st.top()+32==s[i])
            {
                st.pop();
            }
            else
                st.push(s[i]);
        }
        string str="";
        while(!st.empty())
        {
            char s1 = st.top();
            st.pop();
            str+=s1;
        }
        reverse(str.begin(),str.end());
        return str;
        // string str="";
        // for(int i=0;i<s.size();i++)
        // {
        //     if(s[i]==(s[i+1]-32))
        //     {
        //         i++;
        //         continue;
        //     }
        //     str+=s[i];
        // }
        // return str;
    }
};