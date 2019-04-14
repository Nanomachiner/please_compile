#include <iostream>
using namespace std;

struct node
{
    const char* data;
    node *next;
};

struct list
{
    node *head;
    node *tail;

    list()
    {
        head = tail = nullptr;
    }

    ~list()
    {
        node *np = head;
        while (np != 0)
        {
            node *savenext = np->next;
            delete np;
            np = savenext;
        }
    }

    void append(int val)
    {
        node *np = new node;
        np->data = val;
        np->next = nullptr;

        if (tail == nullptr)
            tail = head = np;
        else
        {
            tail = tail->next = np;
        }
    }

    void prepend(int val)
    {
        node *np = new node;
        np->data = val;
        np->next = head;
        head = np;

        if (tail == nullptr)
            tail = np;
    }

    void print()
    {
        cout << "( ";
        for (node *np = head; np != nullptr; np = np->next)
            cout << np->data << " ";
        cout << ")";
    }

};


int main( )
{
    list lst1, lst2;

    lst1.append("stef");
    lst1.append("shirt");
    lst1.append("stef");
    lst1.prepend("shirt");
    lst1.prepend("stef");
    lst1.prepend("shirt");

    cout << "\nFirst list: ";
    lst1.print();

    lst2.append("stef");
    lst2.append("shirt");
    lst2.append("stef");
    lst2.prepend("shirt");

    cout << "\n\nSecond list: ";
    lst2.print();
    cout << endl;

   //Create a third list lst3 that is the concatenation of lst1 followed by lst2, as follows:

    list lst3;

    // Traverse lst1, appending each value in lst1 to the end of lst3 using the member function "append".
    node *np = lst1.head;
    
    for (np; np != nullptr; np = np->next)
    {
        lst3.append(np->data);
    }
    
 /* lst3.append(lst1.head->data);
    lst3.append(lst1.head->next->data);
    lst3.append(lst1.head->next->next->data);
    lst3.append(lst1.head->next->next->next->data);
    lst3.append(lst1.head->next->next->next->next->data);
    lst3.append(lst1.head->next->next->next->next->next->data); */
    
    // I'm keeping this in for conceptual purposes

    // Traverse lst2, appending each value in lst2 to the end of lst3 using the member function "append".
    
    node *np2 = lst2.head;
    
    for (np2; np2 != nullptr; np2 = np2->next)
    {
        lst3.append(np2->data);
    }

/*  lst3.append(lst2.head->data);
    lst3.append(lst2.head->next->data);
    lst3.append(lst2.head->next->next->data);
    lst3.append(lst2.head->next->next->next->data); */
    
    // Keeping this too

    // Print lst3 using member function "print".

    cout << "\nThird list: ";
    lst3.print();
    cout << endl;

    return 0;
}