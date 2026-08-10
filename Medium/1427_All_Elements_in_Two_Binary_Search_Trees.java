/*
 * Problem: All Elements in Two Binary Search Trees
 * Problem ID: 1427
 * Difficulty: Medium
 * Language: Java
 * Runtime: 17 ms
 * Memory: 49.5 MB
 * Synced From: LeetCode
 * Date: 2026-08-10
 */

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public void inOrder(TreeNode root, List<Integer> arr){
        if(root==null) return;
        inOrder(root.left,arr);
        arr.add(root.val);
        inOrder(root.right,arr);

    }
    public List<Integer> getAllElements(TreeNode root1, TreeNode root2) {
        List<Integer> arr  = new ArrayList<>();
        inOrder(root1,arr);
        inOrder(root2,arr);
        Collections.sort(arr);
        return  arr;
    }
}