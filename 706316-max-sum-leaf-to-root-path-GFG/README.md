# [Max Sum Leaf to Root Path](https://www.geeksforgeeks.org/problems/maximum-sum-leaf-to-root-path/1)
## Medium
Given root of a binary tree, find the maximum sum path from any leaf node to the root.Examples:Input: root[] = [1, 2, 3, 4, 5, N, 8, N, 2, N, N, 6, 7]             
Output: 19
Explanation: There are 4 leaf nodes in the tree, resulting in 4 leaf-to-root paths: 2 -&gt; 4 -&gt; 2 -&gt; 1, 5 -&gt; 2 -&gt; 1, 6 -&gt; 8 -&gt; 3 -&gt; 1, and 7 -&gt; 8 -&gt; 3 -&gt; 1. Among these, the path 7 -&gt; 8 -&gt; 3 -&gt; 1 has the maximum sum. The sum of this path is 7 + 8 + 3 + 1 = 19.Input: root[] = [1, -2, 3, N, 5, N, 8]            
Output: 12
Explanation : There are 2 leaf nodes in the tree, resulting in 2 leaf-to-root paths: 5 -&gt; -2 -&gt; 1 and 8 -&gt; 3 -&gt; 1. Among these, the path 8 -&gt; 3 -&gt; 1 has the maximum sum. The sum of this path is 8 + 3 + 1 = 12.