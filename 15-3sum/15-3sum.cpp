class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Best solution afterwall 3 TLE
        // O(N ^2) solution no of triplets is space complexity
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int target=0;
        for(int i=0;i<n;i++)
        {
            int j=i+1,k=n-1,target=-nums[i];
            while(j<k)
            {
                if(nums[j]+nums[k]==target){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    while(j<k && nums[j]==nums[j+1])j++;
                    while(j<k && nums[k]==nums[k-1])k--;
                }
                if(nums[j]+nums[k]>target)k--;
                else j++;
            }
            while(i<n-2 && nums[i+1]==nums[i])i++;
        }
        return ans;
        
        // TLE
        // int n = nums.size();
        // vector<vector<int>> ans;
        // sort(nums.begin(),nums.end());
        // int target=0;
        // set<vector<int>> sv;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //            int x = (long long)target - nums[i]- nums[j];
        //            if(binary_search(nums.begin()+j+1,nums.end(),x))
        //            {
        //                     vector<int> v;
        //                     v.push_back(nums[i]);
        //                     v.push_back(nums[j]);
        //                     v.push_back(x);
        //                     //sort(v.begin(),v.end());
        //                     sv.insert(v);
        //             }
        //         }
        // }
        // for(auto i:sv)
        //     ans.push_back(i);
        // return ans;
        
        
        
        
        // TLE O(N^2)time complexity O(Number of sets)
        
		// int n = nums.size();  
		// sort(nums.begin() , nums.end());  // sort the array to use the two pointers method
		// vector<vector<int>> ans;  
		// set<vector<int>> store;   // to store and remove the duplicate answers
		// int target=0;
		// for(int i = 0 ; i < n; i++)
		// {
		// int new_target = target - nums[i];
		// int x = i+1 , y = n-1;
		// while(x < y){
		// int sum = nums[x] + nums[y];
		// if(sum > new_target) y--;
		// else if(sum < new_target ) x++;
		// else  {
		// store.insert({nums[i],nums[x],nums[y]});
		// x++;
		// y--;
		// }
		// }
		// }
		// for(auto i : store){
		// ans.push_back(i);  // store the answers in an array(ans)
		// }
		// return ans;
        
        
        
        
        // Failed on some concepts
        
        // vector<vector<int>> ans;
        // sort(nums.begin(),nums.end());
        // int n=nums.size()-1;
        // if(n<=0)
        // return ans;
        // for(int i=0;i<n-2;i++)
        // {
        //     int j=i+1,k=n;
        //     while(j<k)
        //     {
        //         if(nums[i]+nums[j]+nums[k]==0)
        //         {
        //           ans.push_back({nums[i],nums[j],nums[k]});
        //             j++;k++;
        //         }  
        //         else if(nums[i]+nums[j]+nums[k]>0)
        //             k--;
        //         else 
        //             j++;    
        //     }
        // }
        // return ans;
    }
};