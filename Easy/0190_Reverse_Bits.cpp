/*
 * Problem: Reverse Bits
 * Problem ID: 190
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 8.1 MB
 * Synced From: LeetCode
 * Date: 2026-08-09
 */

class Solution {
public:
    int reverseBits(int n) {
        int result=0;
        for(int i=0;i<32;i++){
            result<<=1;
            result|=(n&1);
            n>>=1;
        }
        return result;
        
    }
};