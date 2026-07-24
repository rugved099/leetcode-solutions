/*
 * Problem: Minimum Bit Flips to Convert Number
 * Problem ID: 2323
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 8 MB
 * Synced From: LeetCode
 * Date: 2026-07-24
 */

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans =start^goal;
        int count=0;
        for(int i=0;i<31;i++){
            if((ans&(1<<i))!=0){
                count++;
            }
        }
       return count; 
    }
};