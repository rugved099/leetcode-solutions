/*
 * Problem: Delete Node in a Linked List
 * Problem ID: 237
 * Difficulty: Medium
 * Language: C++
 * Runtime: 0 ms
 * Memory: 12.4 MB
 * Synced From: LeetCode
 * Date: 2026-09-01
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
    void deleteNode(ListNode* node) {
        ListNode * nextNode=node->next;
        node->val=nextNode->val;
        node->next=nextNode->next;
        delete nextNode;
    }
};