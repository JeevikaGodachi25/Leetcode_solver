# Problem: Reverse Linked List (Easy)

**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach

I used an iterative approach with three pointers: `prev`, `curr`, and `nextTemp`. The `nextTemp` pointer stores the next node, `curr->next` is changed to point to the previous node, and then the pointers are moved forward.

After processing all nodes, `prev` becomes the new head of the reversed linked list.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I learned how to reverse the links between nodes using pointers. Storing the next node before changing `curr->next` is important because otherwise the remaining linked list could be lost.

### LeetCode Result

- Status: Accepted
- Test Cases Passed: 28/28
- Runtime: 0 ms
- Memory: 11.42 MB

### Bonus Problem

This problem was completed as the bonus Linked List problem for Activity 4.