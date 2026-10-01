# Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

I used a two-step approach to move all non-zero elements to the front of the array while maintaining their relative order. I first placed all non-zero elements at the beginning using a separate index, and then filled the remaining positions with zeros.

This modifies the array in-place without using another array.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I learned that a separate index can be used to keep track of the position where the next non-zero element should be placed. After all non-zero elements are moved forward, the remaining positions can be filled with zeros.

### LeetCode Result

- Status: Accepted
- Test Cases Passed: 75/75
- Runtime: 0 ms
- Memory: 20.34 MB