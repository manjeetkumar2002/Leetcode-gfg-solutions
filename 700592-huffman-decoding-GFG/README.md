# [Huffman Decoding](https://www.geeksforgeeks.org/problems/huffman-decoding/1?sortBy=submissions&category%255B%255D=Greedy&page=2&difficulty%255B%255D=0)
## Hard
Given a Huffman MinHeap tree and an encoded binary string, complete the function huffDecode() to decode the string and return the original text. Each node of the tree contains a character and its frequency, where the special character $ represents internal nodes. Traverse the tree from the root using 0 for left and 1 for right, and whenever a leaf node is reached, add its character to the answer and restart traversal from the root.
Note: Compiler will take string s as an input and encode it in binary string internaly.&nbsp;
Examples:
Input : binaryString = 1111111111110001010101010100010010101010101
Min Heap Tree-Output: AAAAAABCCCCCCDDEEEEE
Explanation: The following chart can be made from the given min heap tree.
character    frequency    code
    A             6        11     (because we have to move right 2 time to reach A from the root)          
    B             1        000    
    C             6        10     (because we have to move right and then left to reach C from the root)
    D             2        001    
    E             5        01In the above given binaryString we replace 11 by A (6 times), 000 by B (1 time), 10&nbsp;by C (6 times), 001 &nbsp;by D&nbsp;(2 times) and 01 by E (5 times).Hence, the answer is AAAAAABCCCCCCDDEEEEE.
Input : binaryString = 01110100011111000101101011101000111
Min Heap Tree-

Output: geeksforgeeks
Explanation: The following chart can be made from the given min heap tree.
character    frequency    code
    f             1        0000                 
    o             1        0001
    r             1        001
    g             2        01    
    k             2        100
    s             2        101
    e             4        11If we replace the binary numbers with the suitable characters, then we get geeksforgeeks as the output.
Constraints:1 ≤ length of input string ≤ 103