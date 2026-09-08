/*
 * Problem: Linked List Cycle II
 * Problem ID: 142
 * Difficulty: Medium
 * Language: C++
 * Runtime: 5 ms
 * Memory: 11.4 MB
 * Synced From: LeetCode
 * Date: 2026-09-08
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
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr || head->next==nullptr) return 0;

        ListNode*fast=head;
        ListNode*slow=head;
        
        while(fast!=nullptr && fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
               
                fast=head;
                while(fast!=slow){
                    fast=fast->next;
                    slow=slow->next;
                }
                return fast;
            }
        }
        
        return nullptr;
    }
};