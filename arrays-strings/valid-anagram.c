#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    int lenS = strlen(s);
    int lenT = strlen(t);

    // 1. If lengths are different, they cannot be anagrams
    if (lenS != lenT) {
        return false;
    }

    // 2. Frequency array for 26 lowercase English letters
    int count[26] = {0};

    // 3. Increment count for s[i], decrement count for t[i]
    for (int i = 0; i < lenS; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    // 4. Verify all letter counts returned to 0
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

// Helper function to run and display each test case
void runTestCase(int testNum, char* s, char* t, bool expected) {
    bool result = isAnagram(s, t);

    printf("Test Case %d:\n", testNum);
    printf("Input:    s = \"%s\", t = \"%s\"\n", s, t);
    printf("Output:   %s\n", result ? "true" : "false");
    printf("Expected: %s\n\n", expected ? "true" : "false");
}

int main() {
    // --- Test Case 1 ---
    runTestCase(1, "anagram", "nagaram", true);

    // --- Test Case 2 ---
    runTestCase(2, "rat", "car", false);

    return 0;
}