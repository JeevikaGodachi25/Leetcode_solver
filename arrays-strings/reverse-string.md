# Problem: Reverse String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

I used the two-pointer approach to reverse the string in-place. One pointer starts from the beginning and another pointer starts from the end, and their elements are swapped until the middle of the string is reached.

The loop runs only until `size/2` because after reaching the middle, all required elements have already been swapped.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I learned that the string can be reversed in-place without using another string. Only half of the elements need to be swapped because each swap handles two positions.

### LeetCode Result

- Status: Accepted
- Test Cases Passed: 477/477
- Runtime: 0 ms
- Memory: 17.96 MB