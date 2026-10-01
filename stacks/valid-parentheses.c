#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool isValid(char* s) {
    int len = strlen(s);
    if (len % 2 != 0) return false;

    char* stack = (char*)malloc(len * sizeof(char));
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        } else {
            if (top == -1) {
                free(stack);
                return false;
            }

            char topChar = stack[top--];
            if ((ch == ')' && topChar != '(') ||
                (ch == '}' && topChar != '{') ||
                (ch == ']' && topChar != '[')) {
                free(stack);
                return false;
            }
        }
    }

    bool result = (top == -1);
    free(stack);
    return result;
}

int main() {
    // Test Case 1
    char* s1 = "()";
    printf("Test 1 Result: %s (Expected: true)\n", isValid(s1) ? "true" : "false");

    // Test Case 2
    char* s2 = "()[]{}";
    printf("Test 2 Result: %s (Expected: true)\n", isValid(s2) ? "true" : "false");

    // Test Case 3
    char* s3 = "(]";
    printf("Test 3 Result: %s (Expected: false)\n", isValid(s3) ? "true" : "false");

    // Test Case 4
    char* s4 = "([)]";
    printf("Test 4 Result: %s (Expected: false)\n", isValid(s4) ? "true" : "false");

    return 0;
}