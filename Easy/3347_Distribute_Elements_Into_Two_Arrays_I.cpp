/*
 * Problem: Distribute Elements Into Two Arrays I
 * Problem ID: 3347
 * Difficulty: Easy
 * Language: C++
 * Runtime: 1 ms
 * Memory: 23.8 MB
 * Synced From: LeetCode
 * Date: 2026-08-20
 */

class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
          int n=nums.size();
        vector<int> arr1,arr2,result;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int Lnum1=arr1[0];
        int Lnum2=arr2[0]; 
        for(int i=2;i<n;i++){

          if(Lnum1>Lnum2){
            arr1.push_back(nums[i]);
            Lnum1=nums[i];
          }
          else if(Lnum1<=Lnum2){
            arr2.push_back(nums[i]);
            Lnum2=nums[i];
            
          }   
        }
        
             arr1.insert(arr1.end(), arr2.begin(), arr2.end());
         return arr1;
    }
};