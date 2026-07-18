/*
 * Problem: Find Greatest Common Divisor of Array
 * Problem ID: 2106
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 16.3 MB
 * Synced From: LeetCode
 * Date: 2026-07-18
 */

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min = *std::min_element(nums.begin(),nums.end());
        int max=*std::max_element(nums.begin(),nums.end());
        return gcd(min,max);
    }
};