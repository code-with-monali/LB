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

int Count(PNODE Head)
{
    return 0;
}

void InsertAtPos(PPNODE Head,int No, int Pos)
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

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;

    //Allocate memory for node
    newn = (PNODE)malloc(sizeof(NODE));
    // newn = (struct Node*)malloc(sizeof(struc Node));

   //Initialise the node
   newn->data = No;
   newn->next = NULL;

   if(*Head == NULL )  // LL is empty
   {
      *Head = newn;
   }
   else //LL contains atleast one node
   {
      newn->next = *Head;
      *Head = newn;
   }
}

void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;

    //Allocate memory for node
    newn = (PNODE)malloc(sizeof(NODE));
    // newn = (struct Node*)malloc(sizeof(struc Node));

   //Initialise the node
   newn->data = No;
   newn->next = NULL;

   if(*Head == NULL )  // LL is empty
   {
      *Head = newn;
   }
   else //LL contains atleast one node
   {

   }
}

void Display(PNODE Head)
{
  printf("Elements of Linked list are : \n");

  while(Head != NULL)
  {
    printf("|%d| -> ",Head->data);
    Head = Head -> next;
  }
  printf("NULL\n");
}

int main()
{
   PNODE First = NULL;
    
    InserFirst(&First,111); //InsertFirst(60,111);
    InserFirst(&First,101); //InsertFirst(60,101);
    InserFirst(&First,51); //InsertFirst(60,51);
    InsertFirst(&First,21); //InsertFirst(60,21);
    InsertFirst(&First,11);//InsertFirst(60,11);

    Display(First);

    return 0;
}