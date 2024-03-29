#include<stdio.h>
#include<stdlib.h> //malloc calloc sathi

struct Node
{
    int no;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node *PNODE; //ptr aahe 8byte chi jaga lagnar
typedef struct Node **PPNODE;

int main()
{
    PNODE First = NULL;

    return 0;
}