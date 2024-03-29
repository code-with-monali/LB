#include<iostream>
using namespace std;

typedef class node
{
    public:
      int data = 0;
       node *next;

       node(int value)
       {
        data = value;
        next = NULL;
       }

}NODE, *PNODE;

class Stack
{
     private:
      PNODE First;
      int iCount;

    public:
      Stack();
      void Push(int no);    //Insertlast
      int Pop();            //DeleteFirst
      void Display();
      int Count();
};

     Stack:: Stack()
     {
        First = NULL;
        iCount = 0;
     }

    void Stack:: Push(int no)    //Insertlast
    {
        PNODE newn = new NODE(no);

        if(First == NULL)
        {
            First = newn;
        }
        else
        {
            PNODE temp = First;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newn;
        }
        iCount++;
    }

    int Stack:: Pop()          //DeleteFirst
    {
        int Value = 0;

        if(iCount == 0)
        {
        cout<<"Stack is empty\n";
        return -1;
        }
        else if(iCount == 1)
        {
          Value = First -> data;
          delete First;
          First = NULL;
        }
        else
        {
            Value = First->data;
            PNODE temp = First;
            First = First -> next;
            delete temp;
        }
        
        iCount--;

        return Value;
    }

    void Stack:: Display()
     {
        cout<<"Elements of stack are : \n";

        PNODE temp = First;

        for(int icnt = 1; icnt < iCount; icnt++)
        {
            cout<<temp->data<<"\n";
            temp = temp -> next;
        }
     }
    
    int Stack:: Count()
      {
        return iCount;
      }


int main()
{

    return 0;
}