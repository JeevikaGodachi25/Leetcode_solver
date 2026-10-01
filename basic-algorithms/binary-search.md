# Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I used the binary search technique on the sorted array. I maintained two pointers, `left` and `right`, and calculated the middle position. If the middle element was equal to the target, I returned its index; otherwise, I searched the appropriate half of the array.

This reduces the search space by half in each iteration.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

I learned that binary search can only be directly applied when the array is sorted. The `left` and `right` pointers help reduce the search range efficiently.

### LeetCode Result

- Status: Accepted
- Test Cases Passed: 47/47
- Runtime: 0 ms
- Memory: 10.05 MB