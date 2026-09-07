/*
 * Problem: Linked List Cycle
 * Problem ID: 141
 * Difficulty: Easy
 * Language: C++
 * Runtime: 4 ms
 * Memory: 11.9 MB
 * Synced From: LeetCode
 * Date: 2026-09-07
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
      
        if(head==nullptr || head->next==nullptr){
            return 0;
        }


        ListNode *fast=head;
        ListNode *slow=head;
        
        while(fast!=nullptr && fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                return true;
            }
        }
        return false;
    }
};