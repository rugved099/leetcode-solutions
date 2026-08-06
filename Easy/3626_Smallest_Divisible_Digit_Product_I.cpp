/*
 * Problem: Smallest Divisible Digit Product I
 * Problem ID: 3626
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 9.4 MB
 * Synced From: LeetCode
 * Date: 2026-08-06
 */

class Solution {
public:
    int smallestNumber(int n, int t) {
        int i=n;
        while(true){
        
           string str = to_string(i);  
           int len=str.length();
           int product=1;
           for(int j=0;j<len;j++){
           product = product * (str[j] - '0');
           }
           if(product%t==0){
            return i;
           }
        i++;
        }
         return -1;
    }
};