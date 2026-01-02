#include<iostream>
using namespace std;

template <class T> 
struct SinglyLLnode
{
    T data;
    struct SinglyLLnode<T> *next;
};

template <class T>
class SinglyLL
{
    private:
        struct SinglyLLnode<T> *first;
        int iCount;

    public:
        SinglyLL();
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
SinglyLL<T>::SinglyLL()
{
    this->first = NULL;
    this->iCount = 0;
}

template <class T>
void SinglyLL<T>::InsertFirst(T no)
{
    struct SinglyLLnode<T> *newn = NULL;
    newn = new SinglyLLnode<T>;
    newn->data = no;
    newn->next = NULL;

    newn->next = this->first;
    this->first = newn;

    this->iCount++;
}

template <class T>
void SinglyLL<T>::InsertLast (T no)
{
    struct SinglyLLnode<T> *newn = NULL;
    newn = new SinglyLLnode<T>;
    newn->data = no;
    newn->next = NULL;

    struct SinglyLLnode<T> *temp = NULL;

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
    }

    this->iCount++;
}

template <class T>
void SinglyLL<T>::DeleteFirst ()
{
    struct SinglyLLnode<T> *temp = NULL;

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
    }

    this->iCount--;
}

template <class T>
void SinglyLL<T>::DeleteLast ()
{
    struct SinglyLLnode<T> *temp = NULL;

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
int SinglyLL<T>::Count ()
{
    return this->iCount;
}

template <class T>
void SinglyLL<T>::Display ()
{
    struct SinglyLLnode<T> *temp = NULL;
    temp = first;

    while (temp != NULL)
    {
        cout << " | " << temp->data << " | -> ";
        temp = temp->next;
    }
    cout << "\n";
}

template <class T>
void SinglyLL<T>::DeleteAtPos (int pos)
{
    int iCnt = 0;
    struct SinglyLLnode<T> *temp = NULL;
    struct SinglyLLnode<T> *target = NULL;

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
        
        this->iCount--;
    }
}

template <class T>
void SinglyLL<T>::InsertAtPos (T no, int pos)
{
int iCnt = 0;
    struct SinglyLLnode<T> *temp = NULL;
    struct SinglyLLnode<T> *target = NULL;

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
        struct SinglyLLnode<T> *newn = NULL;
        newn = new SinglyLLnode<T>;
        newn->data = no;
        newn->next = NULL;

        temp = this->first;
        for(iCnt = 1; iCnt < pos; iCnt++)
        {
            temp=temp->next;
        }
        newn->next = temp->next;
        temp->next=newn;

        this->iCount++;
    }
}

int main()
{
    SinglyLL<int> sobj;
    int iRet = 0;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);
    
    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);
    
    sobj.InsertAtPos(105,5);

    sobj.Display();
    
    iRet = sobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    sobj.DeleteAtPos(5);

    sobj.Display();
    
    iRet = sobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    sobj.DeleteFirst();

    sobj.Display();
    
    iRet = sobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    sobj.DeleteLast();

    sobj.Display();
    
    iRet = sobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    return 0;
}