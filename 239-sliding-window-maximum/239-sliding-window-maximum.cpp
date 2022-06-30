class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        list<int> list;
        int j=0,i=0;
        //list.push(nums[0]);
        while(j<nums.size())
        {
            if(j-i<k)
            {
                while(!list.empty() && list.back()<nums[j])
                {
                    list.pop_back();
                }
                list.push_back(nums[j]);
                j++;
            }
            if(j-i==k)
            {
                ans.push_back(list.front());
                if(list.front()==nums[i])
                    list.pop_front();
                i++;
            }
        }
        return ans;
    }
};