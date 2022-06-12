class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        set<int> st;
        int sum=0,j=0,i=0,maxi=0;
        while(j<n && i<n)
        {
            if(st.find(nums[j])!=st.end())
            {
                sum=sum-nums[i];
                st.erase(nums[i]);
                i++;
            }else{
            
            sum=sum+nums[j];
            st.insert(nums[j]);
            j++;
            cout<<sum;
            maxi=max(maxi,sum);
            }
            
        }
        return maxi;
        
        
        
        // int sum=0,curr=0;
        // unordered_set<int> s;
        // int i=0,j=0,n=nums.size();
        // while(i<n&&j<n){
        //     if(s.find(nums[j])==s.end()){
        //         curr+=nums[j];
        //         s.insert(nums[j++]);
        //         sum=max(sum,curr);
        //     }
        //     else{
        //         curr-=nums[i];
        //         s.erase(nums[i++]);
        //     }
        // }
        // return sum;
    }
};