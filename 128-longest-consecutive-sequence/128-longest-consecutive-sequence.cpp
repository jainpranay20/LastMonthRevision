class Solution
{
    public:
        int longestConsecutive(vector<int> &nums)
        {
            unordered_set<int> s;
            int ans=0;
            for(auto i:nums)
                s.insert(i);
            for(int i=0;i<nums.size();i++)
            {
                if(s.find(nums[i]-1)==s.end()){
                    int j=nums[i];
                    while(s.find(j)!=s.end())
                    {
                        j++;
                        ans=max(ans,j-nums[i]);   
                    }
                }
            }
            return ans;
            
            
            
                    //this code and next code is same it will work if we use set
                // here duplicates will result in error
           	        // sort(nums.begin(),nums.end());
           	        // int n=nums.size(),count=1,maxi=0;
           	        // if(n==1)
           	        //     return 1;
           	        // for(int i=1;i < n;i++)
           	        // {
           	        //    if(nums[i]==nums[i-1]+1) 
           	        //    {
           	        //         count++;
           	        //         maxi=max(maxi,count);
           	        // cout<<maxi;
           	        //         continue;
           	        //    }
           	        //     maxi=max(maxi,count);
           	        //     count=1;
           	        // }
           	        // return maxi;
            
            
    //NICE LOGIC O(N LOGN) TIME WITH O(N )SPACE
            // if (!size(nums)) return 0;
            // sort(begin(nums), end(nums));
            // int longest = 0, cur_longest = 1;
            // for (int i = 1; i < size(nums); i++)
            //     if (nums[i] == nums[i - 1]) continue;
            //     else if (nums[i] == nums[i - 1] + 1) cur_longest++;	
            //     // consecutive element - update current streak length
            //     else longest = max(longest, cur_longest), cur_longest = 1;	
            //     // reset current streak length
            // return max(longest, cur_longest);
        }
};