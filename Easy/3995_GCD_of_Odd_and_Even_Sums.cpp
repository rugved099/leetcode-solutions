/*
 * Problem: GCD of Odd and Even Sums
 * Problem ID: 3995
 * Difficulty: Easy
 * Language: C++
 * Runtime: 1 ms
 * Memory: 8.6 MB
 * Synced From: LeetCode
 * Date: 2026-07-15
 */

class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int esum=0;
        int osum=0;

        // for(int i=1;i<=n;i++){
        //     if(n%2==0){
        //         esum+=i;
        //     }
        //     else{
        //         osum
        //     }
        osum=n*n;
        esum=n*(n+1);
         return gcd(osum,esum);

        
    }
};