#include<iostream>
using namespace std;

template <class T> 
struct DoublyLLnode
{
    T data;
    struct DoublyLLnode<T> *next;
    struct DoublyLLnode<T> *prev;
};

template <class T>
class DoublyLL
{
    private:
        struct DoublyLLnode<T> *first;
        int iCount;

    public:
        DoublyLL();
        void InsertFirst (T no);
        void InsertLast (T no);
        void DeleteFirst ();
        void DeleteLast ();
        int Count ();
        void Display ();
        void DeleteAtPos (int pos);
        void InsertAtPos (T no, int pos);
};

template <class T>
DoublyLL<T>::DoublyLL()
{
    this->first = NULL;
    this->iCount = 0;
}

template <class T>
void DoublyLL<T>::InsertFirst(T no)
{
    struct DoublyLLnode<T> *newn = NULL;
    newn = new DoublyLLnode<T>;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if (this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        newn->next=this->first;
        this->first->prev=newn;
        this->first = newn;
    }

    this->iCount++;
}

template <class T>
void DoublyLL<T>::InsertLast (T no)
{
    struct DoublyLLnode<T> *newn = NULL;
    newn = new DoublyLLnode<T>;
    newn->data = no;
    newn->next = NULL;

    struct DoublyLLnode<T> *temp = NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        temp = this->first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next=newn;
        newn->prev=temp;
    }

    this->iCount++;
}

template <class T>
void DoublyLL<T>::DeleteFirst ()
{
    struct DoublyLLnode<T> *temp = NULL;

    if(this->first == NULL)
    {
        return;
    }
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        temp = this->first;
        this->first = temp->next;

        delete temp;
        this->first->prev = NULL;
    }

    this->iCount--;
}

template <class T>
void DoublyLL<T>::DeleteLast ()
{
    struct DoublyLLnode<T> *temp = NULL;

    if(this->first == NULL)
    {
        return;
    }
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        temp = this->first;
        
        while (temp->next->next != NULL)
        {
            temp=temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    this->iCount--;
}

template <class T>
int DoublyLL<T>::Count ()
{
    return this->iCount;
}

template <class T>
void DoublyLL<T>::Display ()
{
    struct DoublyLLnode<T> *temp = NULL;
    temp = first;

    while (temp != NULL)
    {
        cout << " | " << temp->data << " | <=> ";
        temp = temp->next;
    }
    cout << "\n";
}

template <class T>
void DoublyLL<T>::DeleteAtPos (int pos)
{
    int iCnt = 0;
    struct DoublyLLnode<T> *temp = NULL;
    struct DoublyLLnode<T> *target = NULL;

    if(pos < 1 || pos > this->iCount)
    {
        cout << "Invalid position\n";
        return;
    }

    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = this->first;
        
        for(iCnt = 1; iCnt < pos; iCnt++)
        {
            temp=temp->next;
        }
        target = temp->next;

        temp->next = target->next;

        delete target;

        temp->next->prev = temp;

        this->iCount--;
    }
}

template <class T>
void DoublyLL<T>::InsertAtPos (T no, int pos)
{
int iCnt = 0;
    struct DoublyLLnode<T> *temp = NULL;
    struct DoublyLLnode<T> *target = NULL;

    if(pos < 1 || pos > this->iCount+1)
    {
        cout << "Invalid position\n";
        return;
    }

    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        struct DoublyLLnode<T> *newn = NULL;
        newn = new DoublyLLnode<T>;
        newn->data = no;
        newn->next = NULL;

        temp = this->first;
        for(iCnt = 1; iCnt < pos; iCnt++)
        {
            temp=temp->next;
        }
        newn->next = temp->next;

        temp->next=newn;

        newn->next->prev = newn;

        newn->prev = temp;

        this->iCount++;
    }
}

int main()
{
    DoublyLL<int> dobj;
    int iRet = 0;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);
    
    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);
    
    dobj.InsertAtPos(105,5);

    dobj.Display();
    
    iRet = dobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    dobj.DeleteAtPos(5);

    dobj.Display();
    
    iRet = dobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    dobj.DeleteFirst();

    dobj.Display();
    
    iRet = dobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    dobj.DeleteLast();

    dobj.Display();
    
    iRet = dobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    return 0;
}