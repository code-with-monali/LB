#include<stdio.h>
#include<stdlib.h> //malloc calloc sathi

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node *PNODE; //ptr aahe 8byte chi jaga lagnar
typedef struct Node **PPNODE;

void Display(PNODE Head)
{

}

int Count(PNODE Head)
{
    return 0;
}

void InsertFirst(PPNODE Head, int No)
{

}

void InsertAtPos(PPNODE Head,int No, int Pos)
{

}

void InsertLast(PPNODE Head, int No)
{

}

void DeleteFirst(PPNODE Head)
{

}

void DeleteAtPos(PPNODE Head, int Pos)// yethe position dyavi lagte mhnun
{

}

void DeleteLast(PPNODE Head)
{

}


int main()
{
   PNODE First = NULL;

    return 0;
}