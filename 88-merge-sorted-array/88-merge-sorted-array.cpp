class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        //two pointer approch
        int p1=m-1,p2=n-1,i=m+n-1;
        while(p2>=0)
        {
            if(p1>=0 && nums1[p1]>nums2[p2])
            {
                nums1[i--]=nums1[p1--]; //if nums1 >nums2 then at i position nums1 will come
             }
            else
            {
                nums1[i--]=nums2[p2--]; //else nums2 will come at i position then pointer decreases
            }
        }
        
        
        
        
        
        //
        // int i=0,j=0;
        // while(i<nums1.size() and j<nums2.size())
        // {
        //     if(nums1[i]==0)
        //         i++;
        //     else if(nums1[i]<nums2[j])
        //     {
        //         cout<<nums1[i];
        //         i++;
        //     }
        //     else if(nums1[i]>nums2[j])
        //     {
        //         cout<<nums2[j];
        //         j++;
        //     }
        //     else if(nums1[i]==nums2[j])
        //     {
        //         cout<<nums1[i];
        //         i++;j++;
        //     }
        // }
        // while(i<nums1.size())
        // {
        //     cout<<nums1[i];
        //     i++;
        // }  
        // while(j<nums2.size())
        // {
        //     cout<<nums2[j];
        //     j++;
        // }
  // APPROACHES      
        
//         //Solution 01:
// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int j=0;
//         for(int i=m; i<nums1.size(); i++){
//             nums1[i]=nums2[j];
//             j++;
//         }
//         sort(nums1.begin(), nums1.end());
//         return;
//     }
// };

// //Solution 02:
// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
//         nums1.resize(m);
//         nums1.insert(nums1.end(), nums2.begin(), nums2.end());
//         sort(nums1.begin(), nums1.end());
//     }
// };

// //Solution 03:
// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i=m-1, j=n-1, k=m+n-1;
        
//         while(i>=0 && j>=0){
//             if(nums1[i]>nums2[j]){
//                 nums1[k] = nums1[i];
//                 k--;
//                 i--;
//             }
//             else{
//                 nums1[k] = nums2[j];
//                 k--;
//                 j--;
//             }
//         }
//         while(i>=0){
//             nums1[k] = nums1[i];
//             k--;
//             i--;
//         }
//         while(j>=0){
//             nums1[k] = nums2[j];
//             k--;
//             j--;
//         }
//     }
// };

    }
};