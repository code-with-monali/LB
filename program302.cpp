// Normal class
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

class SinglyLL
{
    public:
       PNODE First;  //Characteristics

       SinglyLL();  //Constructor
};

int main()
{

    return 0;
}