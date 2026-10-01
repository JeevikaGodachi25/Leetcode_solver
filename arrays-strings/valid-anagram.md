# Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used a frequency counting approach with an integer array of size 26. The count of each character in the first string is increased and the count in the second string is decreased.

After processing both strings, I check whether all 26 counts are zero. If they are, both strings contain the same characters with the same frequencies.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I learned that character frequency counting is an efficient way to check whether two strings are anagrams. Since there are only 26 lowercase English letters, the extra array uses constant space.

### LeetCode Result

- Status: Accepted
- Test Cases Passed: 56/56
- Runtime: 0 ms
- Memory: 9.09 MB