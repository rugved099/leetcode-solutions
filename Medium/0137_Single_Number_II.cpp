/*
 * Problem: Single Number II
 * Problem ID: 137
 * Difficulty: Medium
 * Language: C++
 * Runtime: 3 ms
 * Memory: 13.4 MB
 * Synced From: LeetCode
 * Date: 2026-08-04
 */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int check=0;
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        

       for(int i=0; i<n; i+=3){
    if(i+1>=n || nums[i]!=nums[i+1]){
        return nums[i];
    }
}
         return check;
    }
};