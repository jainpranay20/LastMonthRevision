class Solution{
    public:
        vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &arr){
            stack<int> s;
            int n=arr.size();
            vector<int>ans(n);
            for(int i=n - 1;i >= 0;i--)
            {
                while (s.size() && (s.top() <= arr[i])) 
                    s.pop();
                if (s.size() == 0)
                {
                    ans[i] = -1;
                }
                else
                {
                    ans[i] = s.top();
                }
                s.push(arr[i]);
            }
            // reverse(ans.begin(),ans.end());
            unordered_map<int,int> mp;
            for(int i=0;i<ans.size();i++)
            {
                mp[arr[i]]=ans[i];
            }
            vector<int> ans2;
            for(auto i:nums1)
            {
                if(mp.find(i)!=mp.end())
                {
                    ans2.push_back(mp[i]);
                }
            }
            return ans2;  
        }
};