# Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to check whether the brackets are properly matched. Whenever an opening bracket such as `(`, `{`, or `[` is found, it is pushed onto the stack.

When a closing bracket is found, I check the top element of the stack. If the opening and closing brackets match, the opening bracket is removed from the stack. If they do not match, the string is invalid.

After processing all characters, the string is valid only when the stack is empty.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

I learned that a stack follows the Last In, First Out (LIFO) principle, which is useful for checking matching brackets. The most recently opened bracket must be the first one to be closed.

I also learned that the stack must be empty at the end for the parentheses to be valid.

### LeetCode Result

- Status: Accepted
- Test Cases Passed: 103/103
- Runtime: 0 ms
- Memory: 8.55 MB