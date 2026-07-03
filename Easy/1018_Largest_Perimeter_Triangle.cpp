/*
 * Problem: Largest Perimeter Triangle
 * Problem ID: 1018
 * Difficulty: Easy
 * Language: C++
 * Runtime: 9 ms
 * Memory: 25.5 MB
 * Synced From: LeetCode
 * Date: 2026-07-03
 */

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());

for (int i = nums.size() - 1; i >= 2; i--) {
    if (nums[i-2] + nums[i-1] > nums[i]) {
        return nums[i-2] + nums[i-1] + nums[i];
    }
}
return 0;
        
        
    }
};