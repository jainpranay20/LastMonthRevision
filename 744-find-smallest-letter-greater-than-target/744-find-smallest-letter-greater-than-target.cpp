class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        // auto it = upper_bound(letters.begin(),letters.end(),target);
        // if(it==letters.end())
        //     return letters[0];
        // else
        // {
        //     int i=it-letters.begin();
        //     return letters[i];
        // }
        
        int left=0, right = letters.size()-1;
        char ans = ' ';
        
        while(left <= right){
            int mid = left + (right-left)/2;
            if(letters[mid] > target){
                ans = letters[mid];
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        if(ans==' ')
            return letters[0];
        return ans;
    }
};