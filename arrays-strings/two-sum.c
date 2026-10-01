#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *result = (int*)malloc(2 * sizeof(int));
    if (result == NULL) {
        *returnSize = 0;
        return NULL;
    }

    *returnSize = 2;

    for (int i = 0; i < numsSize; i++) {
        for (int j = 0; j < i; j++) {
            if (target == nums[i] + nums[j]) {
                result[0] = j;
                result[1] = i;
                return result;
            }
        }
    }

    *returnSize = 0;
    return NULL;
}

// Helper function to print integer arrays: [2, 7, 11, 15]
void printIntArray(int* arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d%s", arr[i], (i < size - 1) ? "," : "");
    }
    printf("]");
}

// Helper function to run and display each test case
void runTestCase(int testNum, int* nums, int numsSize, int target, int expected0, int expected1) {
    int returnSize;
    int* result = twoSum(nums, numsSize, target, &returnSize);

    printf("Test Case %d:\n", testNum);
    printf("Input:    nums = ");
    printIntArray(nums, numsSize);
    printf(", target = %d\n", target);

    printf("Output:   ");
    if (result != NULL && returnSize == 2) {
        printf("[%d,%d]\n", result[0], result[1]);
        free(result); // Clean up memory
    } else {
        printf("No solution found\n");
    }

    printf("Expected: [%d,%d]\n\n", expected0, expected1);
}

int main() {
    // --- Test Case 1 ---
    int nums1[] = {2, 7, 11, 15};
    runTestCase(1, nums1, sizeof(nums1) / sizeof(nums1[0]), 9, 0, 1);

    // --- Test Case 2 ---
    int nums2[] = {3, 2, 4};
    runTestCase(2, nums2, sizeof(nums2) / sizeof(nums2[0]), 6, 1, 2);

    // --- Test Case 3 ---
    int nums3[] = {3, 3};
    runTestCase(3, nums3, sizeof(nums3) / sizeof(nums3[0]), 6, 0, 1);

    return 0;
}