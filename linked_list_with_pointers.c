#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct node {
    int data;
    int key;

    struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

void printList() {
    struct node *ptr = head;
    printf("\n[");
    while (ptr != NULL) {
        printf("(%d, %d) ", ptr->key, ptr->data);
        ptr = ptr -> next;
    }
    printf("]");
}

void insertFirst(int key, int data) {
    struct node *link = (struct node*) malloc(sizeof(struct node));
}