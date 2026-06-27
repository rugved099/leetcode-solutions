/*
 * Problem: Count Odd Numbers in an Interval Range
 * Problem ID: 1630
 * Difficulty: Easy
 * Language: C++
 * Runtime: 2032 ms
 * Memory: 7.8 MB
 * Synced From: LeetCode
 * Date: 2026-06-27
 */

class Solution {
public:
    int countOdds(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++){
            if(i%2==1){
                count+=1;
            }
        }
         return count;
    }
};