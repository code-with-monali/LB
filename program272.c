#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;  //#
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;   //#

    if(*Head == NULL)  //LL is empty
    {
       *Head = newn;
    }
    else               //LL contains atleast one node in it
    {
      (*Head)->prev = newn;   //#
      newn->next = *Head;
      *Head = newn;
    }
}

void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;   //#

    if(*Head == NULL)  //LL is empty
    {
       *Head = newn;
    }
    else               //LL contains atleast one node in it
    {

    }
}

void InsertAtPos(PPNODE Head, int No, int iPos)
{}

void DeleteFirst(PPNODE Head)
{}

void DeleteLast(PPNODE Head)
{}

void DeleteAtPos(PPNODE Head, int iPos)
{}

void Display(PNODE Head)
{
    printf("Elements of LinkedList are : \n");

    printf("NULL <=> ");
    while(Head != NULL)
    {
        printf("| %d | <=> ",Head->data);
        Head = Head->next;
    }
    printf("NULL \n");
}

int Count(PNODE Head)
{
    return 0;
}

int main()
{
    PNODE First = NULL;
    return 0;
}