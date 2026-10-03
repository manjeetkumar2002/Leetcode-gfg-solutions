# [Minimum Rotations to Unlock a Circular Lock](https://www.geeksforgeeks.org/problems/minimum-rotations-to-unlock-a-circular-lock1001/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article)
## Easy
Given two positive integers r and d of the same length, representing the current and desired lock configurations, respectively, where each digit corresponds to a circular ring numbered from 0 to 9, find the minimum number of rotations required to transform r into d.

In one operation, a ring can be rotated by one position either clockwise or anticlockwise.
The rings are circular, so 9 wraps to 0 and 0 wraps to 9.

Examples:
Input: r = 222, d = 333
Output: 3
Explanation: Each digit 2 can be changed to 3 in one rotation. Therefore, the minimum total rotations required are 1 + 1 + 1 = 3.
Input: r = 2345, d = 5432
Output: 8
Explanation: The minimum rotations required for the corresponding digit pairs (2, 5), (3, 4), (4, 3), and (5, 2) are 3, 1, 1, and 3, respectively. Therefore, the minimum total rotations required are 3 + 1 + 1 + 3 = 8.
