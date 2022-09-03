class Solution {
public:
    void cons(int num,int n,int k,vector<int> &ans)
    {
        if(floor(log10(num)+1)==n)
        {
            ans.push_back(num);
            return;
        }
        for(int i=0;i<=9;i++)
        {
            int second_num = num%10;
            if(abs(second_num - i)==k)
                cons(num*10+i ,n,k,ans);
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> ans;
        for(int i=1;i<10;i++)
        {
            cons(i,n,k,ans);
        }
        return ans;
    }
};