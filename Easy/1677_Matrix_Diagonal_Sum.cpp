/*
 * Problem: Matrix Diagonal Sum
 * Problem ID: 1677
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 15 MB
 * Synced From: LeetCode
 * Date: 2026-07-01
 */

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
    int n= mat.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=mat[i][i];
        if(i!= n-i-1){
            sum+=mat[i][n-i-1];
        }
    }
    return sum;
    }
};