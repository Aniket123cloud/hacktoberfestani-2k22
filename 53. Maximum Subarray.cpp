/**
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Example:

Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Follow up:

If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.
**/


//Runtime: 12 ms, faster than 90.30% of C++ online submissions for Maximum Subarray.
//Memory Usage: 10.4 MB, less than 33.46% of C++ online submissions for Maximum Subarray.
class Solution {
public:
    int maxNegative(vector<int>& nums) {
        int maxNegative = nums[0];
        for(int e : nums){
            //if there are non-negative numbers in nums,
            // return 0
            if(e >= 0) return 0;
            maxNegative = max(maxNegative, e);
        }
        return maxNegative;
    }
    
    int maxSubArray(vector<int>& nums) {
        int mn = maxNegative(nums);
        if(mn < 0) return mn;
        
        int sum = 0, largest = nums[0];
        for(int e : nums){
            sum += e;
            //restart(zero the sum) if it's negative
            sum = max(sum, 0);
            largest = max(largest, sum);
        }
        
        return largest;
    }
};
