#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int lastNonZeroFoundAt = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[lastNonZeroFoundAt++] = nums[i];
        }
    }

    // Fill the remaining positions with zeros
    while (lastNonZeroFoundAt < numsSize) {
        nums[lastNonZeroFoundAt++] = 0;
    }
}

void printArray(int* nums, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d%s", nums[i], (i == size - 1) ? "" : ", ");
    }
    printf("]\n");
}

int main() {
    // Test Case 1
    int nums1[] = {0, 1, 0, 3, 12};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    
    printf("Test 1 Before: ");
    printArray(nums1, size1);
    
    moveZeroes(nums1, size1);
    
    printf("Test 1 After:  ");
    printArray(nums1, size1);
    printf("Expected:      [1, 3, 12, 0, 0]\n\n");

    // Test Case 2
    int nums2[] = {0};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    
    printf("Test 2 Before: ");
    printArray(nums2, size2);
    
    moveZeroes(nums2, size2);
    
    printf("Test 2 After:  ");
    printArray(nums2, size2);
    printf("Expected:      [0]\n");

    return 0;
}