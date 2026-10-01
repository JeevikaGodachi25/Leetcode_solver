# Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

I used a brute-force approach with two nested loops. The first loop selects one element, and the second loop checks the remaining elements to find another element whose sum is equal to the target.

When the required pair is found, their indices are stored in the result array and returned.

### Complexity

- Time: O(n²)
- Space: O(1) auxiliary space

### Notes

The solution checks possible pairs of elements until the required target sum is found. I learned that the answer should contain the indices of the two elements, not their values.

### LeetCode Result

- Status: Accepted
- Test Cases Passed: 65/65
- Runtime: 112 ms
- Memory: 9.40 MB