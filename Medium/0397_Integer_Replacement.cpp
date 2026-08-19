/*
 * Problem: Integer Replacement
 * Problem ID: 397
 * Difficulty: Medium
 * Language: C++
 * Runtime: 0 ms
 * Memory: 7.8 MB
 * Synced From: LeetCode
 * Date: 2026-08-19
 */

class Solution {
public:
    int integerReplacement(int n) {
        long long x=n;
        int Opcount=0;

        if(n==1) return 0;
 while (x != 1) {

            if (x % 2 == 0) {
                x /= 2;
            }
            else {
                if (x == 3 || x % 4 == 1) {
                    x--;
                }
                else {
                    x++;
                }
            }

            Opcount++;
        }

        return Opcount;
    }
};