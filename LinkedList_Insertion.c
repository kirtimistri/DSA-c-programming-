#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}; // linked list data part and pointer to next node in criated
void linkedlidtdisplay(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element:%d\n", ptr->data); // print ptr which is pointer towerds data of nodes
        ptr = ptr->next;                   // to update pointer value
        // next pointer will be updated to latest pointer
    }
};
// case 1:- insert a node at end
struct Node *insertatend(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    // null becouse this is the end of linked list
} // case 2:- insert a node after a spacific node
struct Node *insertafternode(struct Node *previusnode, struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = previusnode->next;
    previusnode->next = ptr;
} // case3:-insert node at first
struct Node *insertatfirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    // one node is allocated dynamically at heap made a pointer ptr
    ptr->next = head; // pointer will be added towerds new node as an heat
    // head is updated to pointer of next
    ptr->data = data; // data of the pointer is updated to new data of new node
    return ptr;
}; // case4:-insert node at a spasific index
struct Node *insertatindex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head; // new p pinter is criatet to tavers and check for ondex insertion
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    // ptrs data is seted
    ptr->next = p->next;
    // ptr next is now equal to p
    p->next = ptr;
    // p next is now equal to ptr
}
int main()
{
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = first;

    first->data = 2;
    first->next = second;

    second->data = 3;
    second->next = third;

    third->data = 4;
    third->next = NULL;
    // this function call takes only one argument which points towerds head fitrst
    // then start the traversal
    printf("linked list before insertion\n");
    linkedlidtdisplay(head);
    // head=insertatfirst(head,7);
    // insertatindex(head,56,1);
    // insertatend(head,56);
    insertafternode(first, head, 45);
    printf("linked list after insertion\n");
    linkedlidtdisplay(head);
    free(head);
    free(first);
    free(second);
    free(third);
    return 0;
}