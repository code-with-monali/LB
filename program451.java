//Singly  linear linked list

import java.util.*;

class Node
{
    public int data;
    public Node next;//yatil next ha reference aahe

    public Node(int no)
    {
        this.data = no;
        this.next = null;
    }
}

class SinglyLL
{
   public Node first;//ha node class ha refer krto
   public int iCount;

public SinglyLL()
{
    this.first = null;
    this.iCount = 0;
}

  public void Display()
  {
     System.out.println("Elements of Linked list are : ");

     Node temp = first;

     while(temp != null)
     {
        System.out.print("| "+temp.data+" |->");
        temp = temp.next;
     }
     System.out.println("null");
  }

  public int Count()
  {
    return this.iCount;
  }

  public void InsertFirst(int no)
  {
    //PNODE newn = (PNODE)malloc(sizeof(NODE));   c
    //PNODE newn = new NODE;                      c++
    Node newn = new Node(no);//yethe obj tyar kela   java

    if(first == null)
    {
      first = newn;
    }
    else
    {
      newn.next = first;//newn. means newn arrow
      first = newn;
    }
    iCount++;
  } 

  public void InsertLast(int no)
  {
        Node newn = new Node(no);//yethe obj tyar kela   java

    if(first == null)
    {
      first = newn;
    }
    else
    {
      Node temp = first;

      while(temp.next != null)
      {
        temp = temp.next;
      }
      temp.next = newn;
    }
    iCount++;
  }

  public void InsertAtPos(int no,int iPos)
  {}

  public void DeleteFirst()
  {
     if(first == null)
     {
        return;
     }
     if(first.next == null)
     {
        first = null;
     }
     else
     {
        first = first.next;
     }
     iCount--;
  }

  public void DeleteLast()
  {}

  public void DeleteAtPos(int iPos)
  {}
  
}

class program451
{
    public static void main(String arg[])
    {
      SinglyLL obj = new SinglyLL();

      obj.InsertFirst(51);
      obj.InsertFirst(21);
      obj.InsertFirst(11);

      obj.InsertLast(101);
      obj.InsertLast(111);
      obj.InsertLast(121);

      obj.Display();

      System.out.println("Number of elements are : "+obj.Count());
    }
}