/*
 * Problem: Smallest Stable Index I
 * Problem ID: 4284
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 30.2 MB
 * Synced From: LeetCode
 * Date: 2026-09-04
 */

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
       

        for(int i=0;i<n;i++){
            // Correct syntax to get the value
int max_val = *std::max_element(nums.begin(), nums.begin()+i+1);
int min_val=*std::min_element(nums.begin()+i,nums.end());
int sindex=(max_val)-(min_val);
if(sindex<=k){
    return i;
}
}
         
         return -1;
        
    }
};