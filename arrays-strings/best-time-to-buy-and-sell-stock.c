#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    if (pricesSize == 0) return 0;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        // 1. Calculate profit if we sell on day i
        int profit = prices[i] - minPrice;

        // 2. Keep track of the highest profit found so far
        if (profit > maxProfit) {
            maxProfit = profit;
        }

        // 3. Keep track of the lowest buying price seen so far
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
    }

    return maxProfit;
}

// Helper function to print integer arrays: [7,1,5,3,6,4]
void printIntArray(int* arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d%s", arr[i], (i < size - 1) ? "," : "");
    }
    printf("]");
}

// Helper function to run and display each test case
void runTestCase(int testNum, int* prices, int pricesSize, int expected) {
    int result = maxProfit(prices, pricesSize);

    printf("Test Case %d:\n", testNum);
    printf("Input:    prices = ");
    printIntArray(prices, pricesSize);
    printf("\n");
    printf("Output:   %d\n", result);
    printf("Expected: %d\n\n", expected);
}

int main() {
    // --- Test Case 1 ---
    int prices1[] = {7, 1, 5, 3, 6, 4};
    runTestCase(1, prices1, sizeof(prices1) / sizeof(prices1[0]), 5);

    // --- Test Case 2 ---
    int prices2[] = {7, 6, 4, 3, 1};
    runTestCase(2, prices2, sizeof(prices2) / sizeof(prices2[0]), 0);

    return 0;
}