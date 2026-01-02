#include<iostream>
using namespace std;

template <class T> 
struct DoublyCLLnode
{
    T data;
    struct DoublyCLLnode<T> *next;
    struct DoublyCLLnode<T> *prev;
};

template <class T>
class DoublyCLL
{
    private:
        struct DoublyCLLnode<T> *first;
        struct DoublyCLLnode<T> *last;
        int iCount;

    public:
        DoublyCLL();
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
DoublyCLL<T>::DoublyCLL()
{
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

template <class T>
void DoublyCLL<T>::InsertFirst(T no)
{
    struct DoublyCLLnode<T> *newn = NULL;
    newn = new DoublyCLLnode<T>;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if (this->first == NULL && this->last == NULL)
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        newn->next=this->first;
        this->first->prev=newn;
        this->first = newn;
    }

    this->last->next = this->first;
    this->first->prev = this->last;
    this->iCount++;
}

template <class T>
void DoublyCLL<T>::InsertLast (T no)
{
    struct DoublyCLLnode<T> *newn = NULL;
    newn = new DoublyCLLnode<T>;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    struct DoublyCLLnode<T> *temp = NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        this->last->next = newn;
        newn->prev = this->last;
        this->last = newn;
    }

    this->last->next = this->first;
    this->first->prev = this->last;
    this->iCount++;
}

template <class T>
void DoublyCLL<T>::DeleteFirst ()
{
    struct DoublyCLLnode<T> *temp = NULL;

    if(this->first == NULL)
    {
        return;
    }
    else if(this->first == this->last)
    {
        delete this->first;
        this->first = NULL;
        this->last = NULL;
    }
    else
    {
        temp = this->first;
        this->first = temp->next;

        delete temp;
        this->first->prev = NULL;
    }

    this->first->prev = this->last;
    this->last->next = this->first;
    this->iCount--;
}

template <class T>
void DoublyCLL<T>::DeleteLast ()
{
    struct DoublyCLLnode<T> *temp = NULL;

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
        temp = this->last->prev;
        delete last;
        this->last = temp;
    }

    this->last->next = this->first;
    this->first->prev = this->last;
    this->iCount--;
}

template <class T>
int DoublyCLL<T>::Count ()
{
    return this->iCount;
}

template <class T>
void DoublyCLL<T>::Display ()
{
    struct DoublyCLLnode<T> *temp = NULL;
    temp = first;

    do
    {
        cout << " | " << temp->data << " | <=> ";
        temp = temp->next;
    }while(temp != this->last->next);
    cout << "\n";
}

template <class T>
void DoublyCLL<T>::DeleteAtPos (int pos)
{
    int iCnt = 0;
    struct DoublyCLLnode<T> *temp = NULL;
    struct DoublyCLLnode<T> *target = NULL;

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
void DoublyCLL<T>::InsertAtPos (T no, int pos)
{
int iCnt = 0;
    struct DoublyCLLnode<T> *temp = NULL;
    struct DoublyCLLnode<T> *target = NULL;

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
        struct DoublyCLLnode<T> *newn = NULL;
        newn = new DoublyCLLnode<T>;
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
    DoublyCLL<int> dobj;
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