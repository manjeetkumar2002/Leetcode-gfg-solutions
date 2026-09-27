# [Maximum Root-to-Leaf Product](https://www.geeksforgeeks.org/problems/maximum-winning-score--170637/1)
## Medium
Given the root of a binary tree, find the maximum product of node values among all root-to-leaf paths. A root-to-leaf path starts from the root and ends at a leaf node. The product of a path is the multiplication of all node values along that path.

It is guaranteed that the maximum product of any root-to-leaf path fits in a 32-bit integer.
The output should be 1 for an empty tree.

Examples:
Input: root = [4, 2, 8, 2, 1, 3, 4]Output: 128
Explanation: The root-to-leaf path with the maximum product is: 4 -&gt; 8 -&gt; 4. The product is: 4 × 8 × 4 = 128
Input: root = [10, 7, 5, N, N, N, 1]Output: 70
Explanation: The root-to-leaf path with the maximum product is: 10 -&gt; 7. The product is: 10 × 7 = 70
Constraints:

1 ≤ Number of nodes ≤ 103
1 ≤ Node.data ≤ 10

