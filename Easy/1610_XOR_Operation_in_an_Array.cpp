/*
 * Problem: XOR Operation in an Array
 * Problem ID: 1610
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 7.8 MB
 * Synced From: LeetCode
 * Date: 2026-06-30
 */

class Solution {
public:
    int xorOperation(int n, int start) {
        int result = 0;

        for(int i = 0; i < n; i++){
            result ^= (start + 2 * i);
        }

        return result;
    }
};