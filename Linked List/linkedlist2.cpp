#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};
// Function for inserting element in the head of the list
void insertAtHead(Node* &head, int data){
    Node  *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}
// Function for displaying the linked list 
void display(Node *head){
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
}


int main(){
    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;
    
    insertAtHead(first, 6);
    display(first);
    return 0;
}
