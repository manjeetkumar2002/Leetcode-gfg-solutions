# [Delete Nodes Greater than K](https://www.geeksforgeeks.org/problems/delete-nodes-greater-than-k/1?sortBy=submissions&category%255B%255D=Binary%2520Search%2520Tree&page=1&difficulty%255B%255D=1)
## Medium
Given the root of a Binary Search Tree (BST) and an integer k, delete all nodes whose values are greater than or equal to k and return the root of the modified BST.
Examples:
Input: root[] = [4, 1, 9], k = 2Output: [1]Explanation: Nodes 4 and 9 are greater than or equal to 2, so they are deleted. The remaining BST contains only 1.
Input: root[] = [8, 3, 10, 1, 6, 9, 12], k = 10Output: [1, 3, 6, 8, 9]Explanation: Nodes 10 and 12 are greater than or equal to 10, so they are deleted. The remaining nodes are 1, 3, 6, 8 and 9.