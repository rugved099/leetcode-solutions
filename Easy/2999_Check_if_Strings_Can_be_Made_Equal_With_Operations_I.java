/*
 * Problem: Check if Strings Can be Made Equal With Operations I
 * Problem ID: 2999
 * Difficulty: Easy
 * Language: Java
 * Runtime: 1 ms
 * Memory: 44.7 MB
 * Synced From: LeetCode
 * Date: 2026-08-12
 */

class Solution {
    public boolean canBeEqual(String s1, String s2) {
        
        boolean evenMatch = (s1.charAt(0) == s2.charAt(0) && s1.charAt(2) == s2.charAt(2)) ||
                            (s1.charAt(0) == s2.charAt(2) && s1.charAt(2) == s2.charAt(0));

        
        boolean oddMatch  = (s1.charAt(1) == s2.charAt(1) && s1.charAt(3) == s2.charAt(3)) ||
                            (s1.charAt(1) == s2.charAt(3) && s1.charAt(3) == s2.charAt(1));

      
        return evenMatch && oddMatch;
    }
}
