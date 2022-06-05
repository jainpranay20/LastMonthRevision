class Solution {
public:
  int majorityElement(vector<int>& nums) {
//         unordered_map<int,int> mp;
// //         for(int i:nums)
// //             mp[i]++;
//             for(int i=0;i<nums.size();i++)
//                 mp[nums[i]]++;
//         for(int i=0;i<nums.size();i++)
//         { if(mp[i].second>(nums.size()/2))
//                 return mp[i].first;
//         }
    
    
    //BEST CONCEPTUAL QUESTION 
    
    
     int candidate=0,count=0;
        for(int i:nums)
        {
            if(count==0)
                candidate=i;
            if(candidate==i)
                count++;
            else
                count--;
        }
        return candidate;
    }
    
    
//           int majorityElement(vector<int>& nums) {
//         unordered_map<int, int> mp;
//         // for(int i=0;i<nums.size();i++){
//         //     mp[nums[i]]++;
//         // }
//         for(int i:nums)
//           mp[i]++;
//         int mid =nums.size()/2;
//         int ans;
//        // for (auto itr : mp){
//        //  if(itr.second>mid)
//        //      ans =itr.first;
//               unordered_map<int, int>::iterator itr;
//         for (itr = mp.begin(); itr != mp.end(); ++itr) {
//        if(itr->second>mid)
//            ans=itr->first;
            
//        }
//         return ans;
    
//     }
};
    