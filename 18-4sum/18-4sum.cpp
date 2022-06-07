class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // 0(n^3 logn) time complexity space 0(number of quads)
//         int n = nums.size();
//         vector<vector<int>> ans;
//         sort(nums.begin(),nums.end());
//         set<vector<int>> sv;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
    
//                 for(int k=j+1;k<n;k++)
//                 { 
//                   //important line
//                    int x = (long long)target - nums[i]- nums[j]- nums[k];
//                    if(binary_search(nums.begin()+k+1,nums.end(),x))
//                    {
//                             vector<int> v;
//                             v.push_back(nums[i]);
//                             v.push_back(nums[j]);
//                             v.push_back(nums[k]);
//                             v.push_back(x);
//                             //sort(v.begin(),v.end());
//                             sv.insert(v);
//                     }
//                 }
//             }
//         }
//         for(auto i:sv)
//             ans.push_back(i);
//         return ans;
//     }
        
        
        
        // 0(n^3) time complexity ans 0(number of quads) space complexity
        int n = nums.size();  
        sort(nums.begin() , nums.end());  // sort the array to use the two pointers method
        vector<vector<int>> ans;  
        set<vector<int>> store;   // to store and remove the duplicate answers
		
        for(int i = 0 ; i < n; i++){
		     for(int j = i + 1; j < n ; j++){
                int new_target  =  target - nums[i] - nums[j];
                int x = j+1 , y = n-1;
                while(x < y){
                    int sum = nums[x] + nums[y];
                    if(sum > new_target) y--;
                    else if(sum < new_target ) x++;
                    else  {
                        store.insert({nums[i] , nums[j] , nums[x] , nums[y]});
                        x++;
                        y--;
                    };
                }
            }
        }
        for(auto i : store){
            ans.push_back(i);  // store the answers in an array(ans)
        }
        return ans;
    }
        
        
    //  TLE
    //     vector<vector<int>> ans;
    //     vector<int> a;
    //     int n=nums.size();
    //     sort(nums.begin(),nums.end());
    //     set<vector<int>> store;
    //     for(int i=0;i<n-3;i++)
    //     {
    //         for(int j=i+1;j<n-2;j++)
    //         {
    //             int k=j+1,l=n-1;
    //             int new_target = target - nums[i] - nums[j];
    //             while(k<l)
    //             {
    //                 if(nums[k]+nums[l]==target)
    //                 {
    //                    store.insert({nums[i] , nums[j] , nums[k] , nums[l]});
    //                 }
    //                 else if(nums[k]+nums[l]<target)
    //                 {
    //                     k++;
    //                 }
    //                 else if(nums[k]+nums[l]>target)
    //                 {
    //                     l--;
    //                 }
    //             }
    //             ans.push_back(a);
    //         }
    //     }
    //     for(auto i : store){
    //         ans.push_back(i);  // store the answers in an array(ans)
    //     }
    //     return ans;
    // }
};