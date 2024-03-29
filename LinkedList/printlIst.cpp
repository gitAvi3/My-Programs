#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
int printing(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    return 0;
}
int sortchack(Node *p)
{
    int x = -65536;
    while (p != NULL)
    {
        if (p->data < x)
            return 0;
        x = p->data;
        p = p->next;
    }
    return 1;
}
int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node*forth=NULL;

    head = new Node;
    second = new Node;
    third = new Node;

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;


    printing(head);
    if (sortchack(head))
    {
        cout << "shorted";
    }
    else
    {
        cout << "Not sorted";
    }

    return 0;
}
/*Search	O(n)	O(n)
Insert	    O(1)	O(1)
Deletion	O(1)	O(1)*/
