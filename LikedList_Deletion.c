#include <stdio.h>
#include <stdlib.h>
// used to criate parts of node data and pointer
struct Node
{
    int data;
    struct Node *next;
};
// to display all teh element of node
void display(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
// to delete first elemnt of linkd list
struct Node *deletefirst(struct Node *head)
{
    struct Node *ptr = head; // ptr pointer is criated and pointing towards head
    head = head->next;       // head is shefted to next node
    free(ptr);
    return head;
}
// to selete last element of linked list
struct Node *deletelast(struct Node *head)
{
    struct Node *p = head;       // p pinter is criated pointing towards head
    struct Node *q = head->next; // q ponter is criated pointing towards next node of head
    while (q->next != NULL)
    {
        q = q->next; // q pointer keep moving towerds next node
        // p pointer keep moving towerds next node
        p = p->next;
    }
    p->next = NULL; // id q next is null then make p next as nullj
    free(q);
}
struct Node *deleatindex(struct Node *head, int index)
{
    struct Node *p = head;       // p id pointing towards head
    struct Node *q = head->next; // q is pointing towards node hext to head
    for (int i = 0; i < index - 1; i++)
    {                // we cant use while loop becouse we cant compare a pointer and an integer
        p = p->next; // move pointer p to next
        q = q->next; // move pointer q to next
    }
    p->next = q->next; // joint p link to q link
    free(q);
}
struct Node *deletedata(struct Node *head, int data)
{
    struct Node *p = head;                     // p  pointing to head
    struct Node *q = head->next;               // q pointing to next node of head
    while (q->data != data && q->next != NULL) // check for q pointers data until data is not equal
    {
        p = p->next; // move p and q to next
        q = q->next;
    }
    if (q->next == NULL)
    {
        printf("Element is not found in linked list\n");
    }
    p->next = q->next; // linking p and q
    free(q);
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

    head->data = 0;
    head->next = first;
    first->data = 1;
    first->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    printf("linked list before deletion\n");
    display(head);
    printf("linked list After deletion\n");
    // head=deletefirst(head);
    // deletelast(head);
    // deleatindex(head,2);
    deletedata(head, 2);
    display(head);
    free(head);
    free(first);
    free(second);
    free(third);
}