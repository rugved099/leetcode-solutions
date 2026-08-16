/*
 * Problem: Check if Strings Can be Made Equal With Operations I
 * Problem ID: 2999
 * Difficulty: Easy
 * Language: C++
 * Runtime: 2 ms
 * Memory: 8.3 MB
 * Synced From: LeetCode
 * Date: 2026-08-16
 */

class Solution {
public:
    bool canBeEqual(string s1, string s2) {
         bool evenMatch = (s1[0] == s2[0] && s1[2] == s2[2]) ||
                            (s1[0] == s2[2] && s1[2] == s2[0]);

        
        bool oddMatch  = (s1[1] == s2[1] && s1[3] == s2[3]) ||
                            (s1[1] == s2[3] && s1[3] == s2[1]);

      
        return evenMatch && oddMatch;
    }
        
    
};