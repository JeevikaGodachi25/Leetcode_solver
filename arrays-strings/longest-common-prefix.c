#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to find the longest common prefix among an array of strings
char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";
    
    // Take the first string as the initial reference
    char* first = strs[0];
    
    for (int i = 0; first[i] != '\0'; i++) {
        char currentChar = first[i];
        
        // Compare current character with every other string in the array
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] == '\0' || strs[j][i] != currentChar) {
                // Allocate memory and null-terminate at the mismatch point
                char* result = (char*)malloc((i + 1) * sizeof(char));
                strncpy(result, first, i);
                result[i] = '\0';
                return result;
            }
        }
    }
    
    // If loop completes, the entire first string is the common prefix
    char* result = (char*)malloc((strlen(first) + 1) * sizeof(char));
    strcpy(result, first);
    return result;
}

int main() {
    // Test Case 1
    char* strs1[] = {"flower", "flow", "flight"};
    int size1 = sizeof(strs1) / sizeof(strs1[0]);
    char* res1 = longestCommonPrefix(strs1, size1);
    printf("Test 1 Result: \"%s\"\n", res1);
    free(res1);

    // Test Case 2
    char* strs2[] = {"dog", "racecar", "car"};
    int size2 = sizeof(strs2) / sizeof(strs2[0]);
    char* res2 = longestCommonPrefix(strs2, size2);
    printf("Test 2 Result: \"%s\"\n", res2);
    if (strlen(res2) > 0) free(res2);

    return 0;
}