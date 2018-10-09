#include<iostream>
using namespace std;
struct Node
{
    int value;
    Node *next;
};
void Add(Node *&h, int v)
{
    Node *n = new Node;
    n->value = v;
    n->next = 0;
    if (h == 0)
        h = n;
    else
    {
        Node *p = h;
        while (p->next != 0)
            p = p->next;
        p->next = n;
    }        
}
int main()
{

    List l<int>;
    l.Add(10);
    l.Add(15);
    l.Add(30);
    l.Display();
    
    
    List<Date> ds;
    ds.Add(Date(3, 4, 1900));
    /*Node *head = 0;
    
    Add(head, 10);
    Add(head, 15);
    Add(head, 30);
    
    while (head != 0)
    {
        cout<<head->value<<endl;
        head = head->next;
    }
    */
        
    return 0;
}
