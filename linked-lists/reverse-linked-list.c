#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list node
struct ListNode {
    int val;
    struct ListNode *next;
};

// Function to reverse the linked list
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;

    while (curr != NULL) {
        struct ListNode* nextTemp = curr->next; // Store next node
        curr->next = prev;                    // Reverse current node's pointer
        prev = curr;                           // Move prev forward
        curr = nextTemp;                       // Move curr forward
    }

    return prev; // prev becomes the new head
}

// Helper function to create a new node
struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Helper function to create a linked list from an array
struct ListNode* createList(int* arr, int size) {
    if (size == 0) return NULL;
    struct ListNode* head = createNode(arr[0]);
    struct ListNode* curr = head;
    for (int i = 1; i < size; i++) {
        curr->next = createNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

// Helper function to print a linked list
void printList(struct ListNode* head) {
    printf("[");
    struct ListNode* curr = head;
    while (curr != NULL) {
        printf("%d%s", curr->val, (curr->next != NULL) ? ", " : "");
        curr = curr->next;
    }
    printf("]\n");
}

// Helper function to free allocated memory
void freeList(struct ListNode* head) {
    struct ListNode* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    // Test Case 1: [1, 2, 3, 4, 5]
    int arr1[] = {1, 2, 3, 4, 5};
    struct ListNode* list1 = createList(arr1, 5);
    printf("Test 1 Before: ");
    printList(list1);

    list1 = reverseList(list1);
    printf("Test 1 After:  ");
    printList(list1);
    printf("Expected:      [5, 4, 3, 2, 1]\n\n");
    freeList(list1);

    // Test Case 2: [1, 2]
    int arr2[] = {1, 2};
    struct ListNode* list2 = createList(arr2, 2);
    printf("Test 2 Before: ");
    printList(list2);

    list2 = reverseList(list2);
    printf("Test 2 After:  ");
    printList(list2);
    printf("Expected:      [2, 1]\n");
    freeList(list2);

    return 0;
}