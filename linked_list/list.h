#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node *nodePtr;

struct  node
{
    int data;
    nodePtr next;
};

typedef struct node node;

#endif

