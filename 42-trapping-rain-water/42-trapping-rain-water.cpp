class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n<=2){
            return 0;
        }
        int max_left=height[0];
        int max_right=height[n-1];
        int left=1;
        int right=n-2;
        int sum=0;
        while(left<=right){
            if(max_left<=max_right)
           { 
                if(height[left]>=max_left)
                max_left=height[left];
                else
                    sum=sum+max_left-height[left];
                    left++;   
            }
            else 
            {               
                if(height[right]>max_right){
                max_right=height[right];
               }
            else
                sum=sum+max_right-height[right];
                right--;
           } 
        } 
        return sum;
        
        
        
        // TLE DE DEGA O(N^2) SPACE O(1) H
//         int n = height.size() ;
//         int res = 0;
//         // For every element of the array
//         for (int i = 1; i < n-1; i++) 
//         {
//             // Find the maximum element on its left
//             int left = height[i] ;
//             for (int j=0; j<i; j++)
//                left = max(left, height[j]);

//             // Find the maximum element on its right  
//             int right = height[i];
//             for (int j=i+1; j<n; j++)
//                right = max(right, height[j]);

//            // Update the maximum water   
//            res += (min(left, right) - height[i]);  
//         }
//         return res;
    }
};