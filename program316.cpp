#include<iostream>
using namespace std;

typedef class node 
{
   public:  
    int data;
    struct node *next;
    struct node *prev;

    node()
    {
        data = 0;
        next = NULL;
        prev = NULL;
    }

    node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }

}NODE , *PNODE;

class LinkedList
{
    public:
      virtual void InsertFirst(int ino) = 0;
       virtual void InsertLast(int ino) = 0;
       virtual void InsertAtPos(int ino, int ipos) = 0;

       virtual void DeleteFirst() =0;
      virtual void DeleteLast() =0;
     virtual void DeleteAtPos(int ipos) =0;

      virtual void Display() =0;
     virtual int Count() =0;
};

class DoublyCL : public LinkedList
{
    private:
      PNODE First;
      PNODE Last;
      int iCount;

    public:
       DoublyCL();
       ~DoublyCL();

      void InsertFirst(int ino);
      void InsertLast(int ino);
      void InsertAtPos(int ino, int ipos);

      void DeleteFirst();
      void DeleteLast();
      void DeleteAtPos(int ipos);

      void Display();
      int Count();
};

DoublyCL::DoublyCL()
{}
 
 DoublyCL::~DoublyCL()
 {}

void DoublyCL:: InsertFirst(int ino)
 {}

void DoublyCL:: InsertLast(int ino)
{}

void DoublyCL:: InsertAtPos(int ino, int ipos)
{}

void DoublyCL:: DeleteFirst()
{}

void DoublyCL:: DeleteLast()
{}

void DoublyCL:: DeleteAtPos(int ipos)
{}

void DoublyCL:: Display()
{}

int DoublyCL:: Count()
{}

int main()
{
   DoublyCL();
   
    return 0;
}