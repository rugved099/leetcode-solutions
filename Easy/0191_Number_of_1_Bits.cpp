/*
 * Problem: Number of 1 Bits
 * Problem ID: 191
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 8.2 MB
 * Synced From: LeetCode
 * Date: 2026-07-23
 */

class Solution {
public:
    int hammingWeight(int n) {
        int count=0;

        for(int i=0;i<32;i++){
            if((n&(1<<i))!=0){
                count++;            }
        }
         return count;
    }
};