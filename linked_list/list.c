#include "list.h"


int main()
{
    nodePtr first = NULL;

    first = malloc(sizeof(node));
    first->next = NULL;
    first->data = 100;
    first->next = malloc(sizeof(node));
    (first->next)->next = NULL;
    (first->next)->data = 200;

    //insert a node in between the first node and the second node

    nodePtr temp;
    temp = malloc(sizeof(node));
    temp->next = first;
    first = temp;

    printf("linked list\n");
    printf("value in the second node is %i\n"first->next->next);
    return (0);

}