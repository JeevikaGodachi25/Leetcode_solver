# Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I compared the characters of the strings to find the common prefix shared by all strings. I checked the characters one by one and stopped when a mismatch was found or when the end of a string was reached.

I then created a result string containing the common prefix and returned it.

### Complexity

- Time: O(n × m)
- Space: O(m)

### Notes

I learned that the comparison should stop as soon as the characters are different. This avoids unnecessary comparisons and correctly handles cases where there is no common prefix.

### LeetCode Result

- Status: Accepted
- Test Cases Passed: 126/126
- Runtime: 3 ms
- Memory: 9.08 MB