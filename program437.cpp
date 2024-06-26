#include<iostream>
using namespace std;

//Structure for singly linear and singly Circular
template <class T>
struct NodeS
{
    T data;
    struct NodeS  *next;
};

//Structure for doubly linear and singly circular
template <class T>
struct NodeD
{
    T data;
    struct NodeD *next;
    struct NodeD *prev;
};

//Class of singly linear Linked list
template <class T>
class SinglyLL
{
    public:
       struct NodeS<T> * first;
       int iCount;
};

//class of Singly circular Linked List 
template <class T>
class SinglyCL
{
    public:
       struct NodeS<T> * first;
       struct NodeS<T> * last;
       int iCount;
};

//class of doubly linear Linked list
template <class T>
class DoublyLL
{
    public:
       struct NodeD<T> * first;
       int iCount;
};

//class of doubly circular Linked list 
template <class T>
class DoublyCL
{
    public:
        struct NodeD<T> * first;
        struct NodeD<T> * last;
        int iCount;
};

//Logic of 32 functions

int main()
{
    return 0;
}