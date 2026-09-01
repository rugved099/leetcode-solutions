/*
 * Problem: Remove Linked List Elements
 * Problem ID: 203
 * Difficulty: Easy
 * Language: C++
 * Runtime: 1 ms
 * Memory: 20.1 MB
 * Synced From: LeetCode
 * Date: 2026-09-01
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
    ListNode* removeElements(ListNode* head, int val) {
       while(head!=NULL && head->val==val){
        ListNode * temp=head;
           head=head->next;
           delete temp;
       }
        ListNode * current=head;
        while(current!=NULL && current->next!=NULL){
            if(current->next->val==val){
                ListNode* temp=current->next;
                current->next=current->next->next;
                delete temp;
            }
            else{
                current=current->next;
            }
        }
      return head;
    }
};