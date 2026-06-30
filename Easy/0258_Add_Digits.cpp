/*
 * Problem: Add Digits
 * Problem ID: 258
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 8.5 MB
 * Synced From: LeetCode
 * Date: 2026-06-30
 */

class Solution {
public:
    int addDigits(int num) {

        while (num >= 10) {    
            int sum = 0;

            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }

            num = sum;
        }

        return num;
    }
};