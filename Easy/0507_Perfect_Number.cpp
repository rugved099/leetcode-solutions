/*
 * Problem: Perfect Number
 * Problem ID: 507
 * Difficulty: Easy
 * Language: C++
 * Runtime: 1039 ms
 * Memory: 7.7 MB
 * Synced From: LeetCode
 * Date: 2026-07-21
 */

class Solution {
public:
    bool checkPerfectNumber(int num) {
         int sum=0;
       for(int i=1;i<=num/2;i++){
       
        if(num%i==0){
            sum+=i;
        }
       }

       return num==sum;
    }
};