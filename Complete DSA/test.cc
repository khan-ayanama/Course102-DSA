#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;

        // Memory free
        if (this->next != NULL)
        {
            delete this->next;
            this->next = NULL;
        }

        cout << "Node deleted of data: " << value << endl;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int data)
{

    // Inserting at head
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    int count = 1;

    Node *temp = head;

    while (count < position - 1)
    {
        if (temp->next == NULL)
        {
            cout << "Cannot ADD" << endl;
            break;
        }
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    // Creating node to insert
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node *&head, Node *&tail)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        if (curr->next == NULL)
        {
            tail = prev;
            prev->next = NULL;
            delete curr;
        }
        else
        {
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
        }
    }
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *node1 = new Node(5);
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    // cout << endl;

    // Inserting at Tail
    Node *tail = node1;
    insertAtTail(tail, 6);
    insertAtTail(tail, 7);

    // Inserting at Head
    Node *head = node1;
    insertAtHead(head, 2);
    insertAtHead(head, 1);

    // Inserting at postion
    insertAtPosition(tail, head, 3, 3);

    // When position is greater than the size of tail it will add at last
    insertAtPosition(tail, head, 4, 4);

    cout << "printing Linked List" << endl;
    print(head);

    deleteNode(1, head, tail);

    cout << "Printing rest of list" << endl;
    print(head);

    // cout << "tail " << tail->data << endl;
    // cout << "tail " << head->data << endl;
}