/*
 * Problem: Remove Duplicates from Sorted List
 * Problem ID: 83
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 16.2 MB
 * Synced From: LeetCode
 * Date: 2026-09-03
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
          if (head == nullptr || head->next == nullptr) return head;

        
        
        ListNode*current=head;
        ListNode* t=current->next;
        while(t!=NULL){
        if(current->val!=t->val){
            current=t;
            t=t->next;
        }
        else{
            current->next=t->next;
            delete t;
            t=current->next;
        }
        }
        return head;
    }
};