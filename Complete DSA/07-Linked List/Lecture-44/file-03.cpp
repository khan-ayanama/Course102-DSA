#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node(){
        int value = this->data;

        // Memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }

        cout<<"Node deleted of data: "<<value<<endl;
    }
};

void insertAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    
    temp->next = head;
    head->prev = temp;
    head = temp;
    return;
}

void insertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);

    temp->prev = tail;
    tail->next = temp;
    tail = temp;
    return;
}

void insertAtPosition(Node* &head,Node* &tail,int position,int data){
    if (position==1)
    {
        insertAtHead(head,data);
    }

    int count = 1;

    Node* temp = head;

    while(count<position-1){
        temp = temp->next;
        count++;
    }    

    if(temp->next == NULL){
        insertAtTail(tail,data);
    }

    Node* nodeToInsert = new Node(data);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(Node* &head,int position){
    if(position==1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;

        delete temp;
    }else{
        // Deleting value other than first
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;

        while(count<position){
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev->next = curr->next;

        if(curr->next!=NULL){
            curr->next->prev = curr->prev;
        }
        curr->prev = NULL;
        curr->next = NULL;
        delete curr;
    }



}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    // Doubly Linked List
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertAtHead(head,11);
    insertAtHead(head,1211);

    print(head);

    insertAtTail(tail,55);
    insertAtTail(tail,35);

    print(head);

    insertAtPosition(head,tail,2,212);
    print(head);

    deleteNode(head,3);
    print(head);

    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
}