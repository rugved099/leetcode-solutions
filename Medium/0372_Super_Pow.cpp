/*
 * Problem: Super Pow
 * Problem ID: 372
 * Difficulty: Medium
 * Language: C++
 * Runtime: 0 ms
 * Memory: 15.2 MB
 * Synced From: LeetCode
 * Date: 2026-07-04
 */

class Solution {
public:
    int MOD = 1337;

    int modPow(int a, int b) {
        int result = 1;
        a %= MOD;

        while (b > 0) {
            if (b % 2 == 1) {
                result = (result * a) % MOD;
            }

            a = (a * a) % MOD;
            b /= 2;
        }

        return result;
    }

    int superPow(int a, vector<int>& b) {
        int ans = 1;

        for (int digit : b) {
            ans = (modPow(ans, 10) * modPow(a, digit)) % MOD;
        }

        return ans;
    }
};