#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};//linked list data part and pointer to next node in criated

void Linkedlisttraversal(struct Node *ptr)
{
    // this function takes the pointer type of "struct Node*"
    while (ptr != NULL)
    {
        printf("Element:%d\n", ptr->data); // print ptr which is pointer towerds data of nodes
        ptr = ptr->next; // ptr is pointing towerds next Node updating pointer value
    }
};

int main()
{
    struct Node *head; // declaration of nodes
    struct Node *first;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node)); // memory allocation of nodes
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    // this is the syntax to allocate the dynamic memory
    // Dynamic memory allocation = this memory is ued temproraryly to execute a function
    // and after execution of function it is relised to use for other functions efficiently
    // Dynamic memory allocation is done in the heap
    // symtax explanation :-"(struct Node*)"" this is the type of variable which needs to access
    // dynamic memory. "melloc" memory at location ."(size of (struct Node))" which size of memory
    // we need to access
    // example:- ptr=(int*)malloc(%*sizeof(int))

    // filling data linking of nodes to each other
    // linknd head to first
    head->data = 7;
    head->next = first;
    // linked first to second
    first->data = 8;
    first->next = second;
    // linked second to therd
    second->data = 9;
    second->next = third;
    // terminate the linked list
    third->data = 10;
    third->next = NULL;
    Linkedlisttraversal(head);
    //freeup heap memory space to avoid mameory lick
    free(head);
    free(first);
    free(second);
    free(third);
    return 0;
}