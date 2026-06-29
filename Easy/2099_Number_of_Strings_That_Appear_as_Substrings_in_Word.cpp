/*
 * Problem: Number of Strings That Appear as Substrings in Word
 * Problem ID: 2099
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 11.7 MB
 * Synced From: LeetCode
 * Date: 2026-06-29
 */

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans=0;

        for(string s:patterns){
            if(word.contains(s)){
                ans++;
            }
        }
         return ans;
    }
};