/*
 * Problem: Subsets
 * Problem ID: 78
 * Difficulty: Medium
 * Language: C++
 * Runtime: 3 ms
 * Memory: 9.9 MB
 * Synced From: LeetCode
 * Date: 2026-08-09
 */

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>>ans;
        int n =nums.size();
        int p=1<<n;
        for(int j=0;j<p;j++){
            vector<int>sub;
            for(int i=0;i<n;i++){
                if( j&(1<<i)){
                    sub.push_back(nums[i]);
                }
            }
            ans.push_back(sub);
        }
        return ans;
    }
};