/*
 * Problem: Count Commas in Range
 * Problem ID: 4245
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 8.6 MB
 * Synced From: LeetCode
 * Date: 2026-09-08
 */

class Solution {
public:
    int countCommas(int n) {
        int count =0;
       if(n<1000) return 0;

       else{
        for(int i=1000;i<=n;i++){
            count++;
        }
        
       }
    
        
        return count;
        
    }
};