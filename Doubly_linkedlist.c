#include <stdio.h>
#include <stdlib.h>
struct Node
{//doubly linked list have 3 parts poiter to preivius node data and pointer to next node
    int data;
    struct Node *prev;//pointer to previous node
    struct Node *next;//pointer to next node
};
void DoubleTraversal(struct Node *N1, struct Node *N4)
{//pointer ptr1 and ptr 2 are criated
    struct Node *ptr1 = N1;//pointing to first node
    struct Node *ptr2 = N4;//ponting to last node
    printf("Doubly LInked List in forward\n");
    printf("Element:%d\n", ptr1->data);
    while (ptr1->next!= NULL)
    {
        ptr1 = ptr1->next;//move ptr1 towerds next until the next node is null
        printf("Element:%d\n", ptr1->data);
    }
    printf("Dubly LInked List in backward\n");
    printf("Element:%d\n", ptr1->data);
    while (ptr2->prev != NULL)
    {
        ptr2 = ptr2->prev;//move ptr2 to the next until the previus node is null
        printf("Element:%d\n", ptr2->data);
    }
}
int main()
{
    struct Node *N1;
    struct Node *N2;
    struct Node *N3;
    struct Node *N4;

    N1 = (struct Node *)malloc(sizeof(struct Node));
    N2 = (struct Node *)malloc(sizeof(struct Node));
    N3 = (struct Node *)malloc(sizeof(struct Node));
    N4 = (struct Node *)malloc(sizeof(struct Node));

    N1->data = 25;
    N1->next = N2;
    N1->prev = NULL;

    N2->data = 34;
    N2->next = N3;
    N2->prev = N1;

    N3->data = 56;
    N3->next = N4;
    N3->prev = N2;

    N4->data = 52;
    N4->next = NULL;
    N4->prev = N3;
    DoubleTraversal(N1, N4);
}