class Solution {
public:
    int search(vector<int>& nums, int target) {
        // jo bhi part sorted h hum udhar ki side jayenge 
        // we leave rest of all 
		int start = 0;
		int end = nums.size()-1;

		while(start <= end)
		{
			int mid = start + (end - start) / 2;

			if(nums[mid] == target)
				return mid;

			if(nums[mid] >= nums[start])
			{
				if(nums[start] <= target && target < nums[mid])
					end = mid - 1;
				else
					start = mid + 1;
			}
			else
			{
				if(nums[mid] < target && target <= nums[end])
					start = mid + 1;
				else
					end = mid - 1;
			}
		}
		return -1;
	} 
    
};
/*


class Solution {

  int bs(vector < int > & nums, int l, int h, int target) {          //Binary Search Function
    while (l <= h) {
      int m = l + (h - l) / 2;
      if (nums[m] == target)
        return m;
      else if (target > nums[m])
        l = m + 1;
      else
        h = m - 1;
    }
    return -1;
  }
  int find_min_index(vector < int > & nums, int start, int end, int target) { //function returns the index of the smallest element
    int n = nums.size();
    if (n == 1) return 0;
    if (nums[0] < nums[n - 1]) return 0; //if array is already sorted

    while (start <= end) {
      int mid = start + (end - start) / 2;
      int prev = (mid + n - 1) % n; //to prevent overflow
      int next = (mid + 1) % n;

      if (nums[mid] < nums[prev] && nums[mid] < nums[next])
        return mid;

      else if (nums[end] < nums[mid]) //if true means right half is unsorted so search for min begins there 
        start = mid + 1;

      else //means left half is unsorted 
        end = mid - 1;
    }
    return -1;
  }
  public:
    int search(vector < int > & nums, int target) {
      int n = nums.size();
      int min_index = find_min_index(nums, 0, n - 1, target);
      int bin1 = bs(nums, 0, min_index - 1, target); //apply bin. search on the left sorted array
      int bin2 = bs(nums, min_index, n - 1, target); //apply bin. search on the right sorted array

      if (bin1 == bin2)
        return -1;
      if (bin1 != -1)
        return bin1;
      else
        return bin2;

    }

};

*/