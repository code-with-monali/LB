//Doubly linear linked list

import java.util.*;

class Node
{
    public int data;
    public Node next;//yatil next ha reference aahe
    public Node prev;

    public Node(int no)
    {
        this.data = no;
        this.next = null;
        this.prev = null;
    }
}

class DoublyLL
{
   public Node first;//ha node class ha refer krto
   public int iCount;

public DoublyLL()//constructor
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
        System.out.print("| "+temp.data+" |<=>");
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
      first.prev = newn;
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
      newn.prev = temp;
    }
    iCount++;
  }

  public void InsertAtPos(int no,int iPos)
  {
    int iSize = Count();

    if((iPos < 1) || (iPos > iSize+1))
    {
        System.out.println("Invalid position");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(no);
    }
    else if(iPos == iSize+1)
    {
        InsertLast(no);
    }
    else
    {
        Node temp = first;
        for(int icnt =1; icnt < iPos-1; icnt++)
        {
            temp = temp.next;
        }

        Node newn = new Node(no);

        newn.next = temp.next;
        temp.next.prev = newn;

        temp.next = newn;
        newn.prev = temp;

        iCount++;
    }
  }

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
        first.prev = null;
     }
      iCount--;
    
 }

  public void DeleteLast()
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
        Node temp = first;

        while(temp.next.next != null)
        {
            temp = temp.next;
        }
        temp.next= null;
    }
    iCount--;
  }

  public void DeleteAtPos(int iPos)
  {
    
    int iSize = Count();

    if((iPos < 1) || (iPos > iSize+1))
    {
        System.out.println("Invalid position");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iSize+1)
    {
        DeleteLast();
    }
    else
    {
        Node temp = first;
        for(int icnt =1; icnt < iPos-1; icnt++)
        {
            temp = temp.next;
        }

        temp.next = temp.next.next;
        temp.next.prev = temp;

        iCount--;
    }
  }
  
}

class program455
{
    public static void main(String arg[])
    {
      DoublyLL obj = new DoublyLL();

      obj.InsertFirst(51);
      obj.InsertFirst(21);
      obj.InsertFirst(11);

      obj.InsertLast(101);
      obj.InsertLast(111);
      obj.InsertLast(121);

      obj.InsertAtPos(55,4);
      obj.Display();

      System.out.println("Number of elements are : "+obj.Count());
     
     obj.DeleteAtPos(4);

     obj.Display();

      System.out.println("Number of elements are : "+obj.Count());

      obj.DeleteFirst();
      obj.DeleteLast();

       obj.Display();

      System.out.println("Number of elements are : "+obj.Count());
     

    }
}