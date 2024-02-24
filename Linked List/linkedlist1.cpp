/*
Problems with the arrays leads to the creation of the linked list.
Why linked list? 
i. We need to declare the size of the array at first only but the linked list is 
dyanamic. 

ii. insertion deletion in the middle of the linked list is easier than array.

iii. Linked lists are created in heap space.

iv. Linked lists are faster than arrays.

v. Linked lists are more efficient than arrays.



Linked list is the collection of the nodes where each node contains the data and the 
pointer to the next node.

The first node is known as the head node.
The last node is known as the tail node. the pointer will be null for the last node.

*/

// Implementaion of the linked list in c++
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
void display(Node *node){
    while(node){
        cout << node->data << " ";
        node = node->next;
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

    display(first);
    return 0;
}
