# Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I used a single-pass approach to keep track of the minimum stock price seen so far and the maximum profit obtained. For each price, I calculate the possible profit by subtracting the minimum price from the current price and update the maximum profit when needed.

This approach ensures that the stock is bought before it is sold.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I learned that we can solve this problem efficiently by keeping track of the minimum price instead of checking every possible buying and selling pair.

### LeetCode Result

- Status: Accepted
- Test Cases Passed: 213/213
- Runtime: 0 ms
- Memory: 16.14 MB