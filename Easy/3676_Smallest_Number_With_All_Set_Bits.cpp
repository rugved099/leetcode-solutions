/*
 * Problem: Smallest Number With All Set Bits
 * Problem ID: 3676
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 8.4 MB
 * Synced From: LeetCode
 * Date: 2026-07-24
 */

class Solution {
public:
 int smallestNumber(int n) {
     
 int length = log2(n) + 1; 
        int ans=n;
        for(int i=0;i<length;i++){
            ans=(ans|(1<<i));
        }
        return ans;
    }
};