// inserting the node at the tail of the linked list
#include<iostream> 
using namespace std;

class Node{
    public: 
    int data;
    Node *next;
    
    Node(){
        data = 0;
        next = NULL;
    }

    Node( int data) {
    this-> data = data;
    this-> next = NULL;
    }
};
void insertNodeAtTail(Node* &tail, int data){
    Node *temp = new Node(data);
    tail-> next = temp;
    tail = temp;

    
}

void display(Node *node){
    while(node){
        cout<<node->data<<" ";
        node = node->next;
    }
}

int main(){

    Node *tail = new Node();
    insertNodeAtTail(tail, 10);
    insertNodeAtTail(tail, 20);
    insertNodeAtTail(tail, 30);
    insertNodeAtTail(tail, 40);
    display(tail);

    

}