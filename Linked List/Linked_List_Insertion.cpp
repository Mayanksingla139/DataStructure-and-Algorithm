#include <iostream>
using namespace std;

class LinkedListNode
{
public:
    int data;
    LinkedListNode *next;

    // constructor
    LinkedListNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(LinkedListNode *&Head, int data)
{
    LinkedListNode *temp = new LinkedListNode(data);
    temp->next = Head;
    Head = temp;
}

void insertAtTail(LinkedListNode *&Tail, int data)
{
    LinkedListNode *temp = new LinkedListNode(data);
    Tail->next = temp;
    Tail = temp;
}

void insertAtPosition(LinkedListNode *&Tail, LinkedListNode *&Head, int pos, int data)
{

    if (pos == 1)
    {
        insertAtHead(Head, data);
        return;
    }

    LinkedListNode *temp = Head;
    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(Tail, data);
        return;
    }

    LinkedListNode *node = new LinkedListNode(data);
    node->next = temp->next;
    temp->next = node;
}

void printNode(LinkedListNode *&Head)
{
    LinkedListNode *temp = Head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    LinkedListNode *n1 = new LinkedListNode(4);
    cout << "data:" << n1->data << " Next:" << n1->next << endl;

    LinkedListNode *head = n1;
    LinkedListNode *tail = n1;

    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);

    printNode(head);

    insertAtTail(tail, 5);
    insertAtTail(tail, 6);
    insertAtTail(tail, 7);

    printNode(head);

    insertAtPosition(tail, head, 8, 0);
    insertAtPosition(tail, head, 3, 0);
    insertAtPosition(tail, head, 1, 0);

    printNode(head);

    cout << "Head:" << head->data << endl;
    cout << "Tail:" << tail->data << endl;
    return 0;
}