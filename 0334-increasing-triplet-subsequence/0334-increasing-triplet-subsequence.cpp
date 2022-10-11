class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
                int firstSmallest = INT_MAX, secondSmallest=INT_MAX;
        for (int num: nums) {
            if (num <= firstSmallest) {
                firstSmallest = num;
            } else if (num <= secondSmallest) {
                secondSmallest = num;
            } else {
                return true;
            }
        }
        return false;
    }
};