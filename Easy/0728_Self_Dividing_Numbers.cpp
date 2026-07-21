/*
 * Problem: Self Dividing Numbers
 * Problem ID: 728
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 9.1 MB
 * Synced From: LeetCode
 * Date: 2026-07-21
 */

class Solution {
public:

bool IsSelfDividing(int num){
    
            int temp =num;
            int rem=0;
            int count=0;
            while(temp>0){
                rem=temp%10;
                if (rem == 0 || num % rem != 0) {
                return false; 
            }
                temp/=10;
                }
                return true;
                

}



    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>arr;

        for(int i=left ; i<=right;i++){
            if(IsSelfDividing(i)){
                arr.push_back(i);
            }

        }

        return arr;
        
    }
};