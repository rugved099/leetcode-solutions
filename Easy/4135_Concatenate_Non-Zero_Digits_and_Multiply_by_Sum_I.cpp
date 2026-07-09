/*
 * Problem: Concatenate Non-Zero Digits and Multiply by Sum I
 * Problem ID: 4135
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 8.9 MB
 * Synced From: LeetCode
 * Date: 2026-07-09
 */

class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        long long num = 0;
        long long place = 1;

        while (n > 0) {
            int rem = n % 10;

            if (rem != 0) {
                sum += rem;
                num = rem * place + num;
                place *= 10;
            }

            n /= 10;
        }

        return num * sum;
    }
};