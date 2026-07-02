/*
 * Problem: Consecutive Characters
 * Problem ID: 1542
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 9.5 MB
 * Synced From: LeetCode
 * Date: 2026-07-02
 */

class Solution {
public:
    int maxPower(string s) {
        int n = s.size();
        int maxLen = 0;

        for (int i = 0; i < n; ) {
            int j = i;

            while (j < n && s[j] == s[i]) {
                j++;
            }

            string sub = s.substr(i, j - i); // consecutive block
            maxLen = max(maxLen, (int)sub.length());

            i = j;
        }

        return maxLen;
    }
};