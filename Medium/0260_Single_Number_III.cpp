/*
 * Problem: Single Number III
 * Problem ID: 260
 * Difficulty: Medium
 * Language: C++
 * Runtime: 0 ms
 * Memory: 13.8 MB
 * Synced From: LeetCode
 * Date: 2026-08-04
 */

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> db;
       
        sort(nums.begin(),nums.end());
        int n=nums.size();
        

        for(int i=0;i<n;i++){
            if(i<n-1 && nums[i]==nums[i+1]){
                i++;
            }
            else{
                db.push_back(nums[i]);
            }
          
        }

        
         return db;
    }
};