/*
 * Problem: Complement of Base 10 Integer
 * Problem ID: 1054
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 8 MB
 * Synced From: LeetCode
 * Date: 2026-07-08
 */

class Solution {
public:
    int bitwiseComplement(int n) {

        if (n == 0)
            return 1;

        string binary = "";

        
        while (n > 0) {
            binary = char((n % 2) + '0') + binary;
            n /= 2;
        }

        
        for (int i = 0; i < binary.size(); i++) {
            if (binary[i] == '0')
                binary[i] = '1';
            else
                binary[i] = '0';
        }

        
        int ans = 0;
        for (char bit : binary) {
            ans = ans * 2 + (bit - '0');
        }

        return ans;
    }
};