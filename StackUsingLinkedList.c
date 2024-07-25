#include <stdlib.h>
#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *top = NULL;

int isEmpty(struct Node *top) {
    return top == NULL;
}

int isFull(struct Node *top) {
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL) {
        return 1;
    } else {
        free(n);
        return 0;
    }
}


int peek(int pos) {
    struct Node *ptr = top;
    for (int i = 0; (i < pos - 1 && ptr != NULL); i++) {
        ptr = ptr->next;
    }
    if (ptr != NULL) {
        return ptr->data;
    } else {
        return -1;
    }
}

struct Node* push(struct Node *top, int x) {
    if (isFull(top)) {
        printf("Can't push %d, stack is full\n", x);
    } else {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
    }
    return top;
}

struct Node* pop(struct Node *tp) {
    if (isEmpty(tp)) {
        printf("Can't pop, stack is empty\n");
        return NULL;
    } else {
        struct Node *n = tp;
        tp = tp->next;
        int x = n->data;
        free(n);
        return tp;
    }
}

void linkedListTraversal(struct Node *ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main() {
    top = push(top, 7);
    top = push(top, 8);
    top = push(top, 5);
    top = push(top, 0);
    top = push(top, 9);
    top = pop(top);
    linkedListTraversal(top);
    for (int i = 1; i <= 6; i++) {
        printf("Value at position %d is %d\n", i, peek(i));
    }
    return 0;
}
