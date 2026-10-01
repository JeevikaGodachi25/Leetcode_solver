#include <stdio.h>
#include <string.h>

void reverseString(char* s, int sSize) {
    int n = sSize - 1;
    for (int i = 0; i < sSize / 2; i++) {
        char temp = s[i];
        s[i] = s[n];
        s[n] = temp;
        n--;
    }
}

// Helper function to print character arrays in LeetCode format: ["a","b","c"]
void printCharArray(char* arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("\"%c\"%s", arr[i], (i < size - 1) ? "," : "");
    }
    printf("]\n");
}

int main() {
    // --- Test Case 1 ---
    char s1[] = {'h', 'e', 'l', 'l', 'o'};
    int size1 = sizeof(s1) / sizeof(s1[0]);

    printf("Test Case 1:\n");
    printf("Input:    ");
    printCharArray(s1, size1);

    reverseString(s1, size1);

    printf("Output:   ");
    printCharArray(s1, size1);
    printf("Expected: [\"o\",\"l\",\"l\",\"e\",\"h\"]\n\n");

    // --- Test Case 2 ---
    char s2[] = {'H', 'a', 'n', 'n', 'a', 'h'};
    int size2 = sizeof(s2) / sizeof(s2[0]);

    printf("Test Case 2:\n");
    printf("Input:    ");
    printCharArray(s2, size2);

    reverseString(s2, size2);

    printf("Output:   ");
    printCharArray(s2, size2);
    printf("Expected: [\"h\",\"a\",\"n\",\"n\",\"a\",\"H\"]\n");

    return 0;
}