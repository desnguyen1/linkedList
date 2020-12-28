#include <iostream>

using std::cout;

class Node{
    public:
    int data;
    Node* next;
};

void traverse(Node* n){
    while(n != NULL){
        cout<<"\n+---+---+";
        cout<<"\n| "<<n->data<<" | o |";
        cout<<"\n+---+-|-+";
        cout<<"\n   ___|";
        cout<<"\n  |    ";
        cout<<"\n  v    ";
        //std::cout<<"\n"<<n->data;
        if(n->next == NULL){
            cout<<"\nNULL"<<std::endl;
        }
        n = n->next;
    }
}

int main(){

    //creating a simple linked list with 3 nodes
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    //allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();

    // Three blocks have been allocated dynamically
    // We have three pointers to the three blocks 

    head->data = 1; //assigning data in first node
    head->next = second; //pointer of first node goes to second node

    /* Visual 

    head           second
        |               |
        |               |
    +---+---+       +---+---+
    | 1 | o-------> | x | x |
    +---+---+       +---+---+
    */

   second->data = 2;
   second->next = third;

    /* Visual 

    head           second           third
        |               |               |
        |               |               |
    +---+---+       +---+---+       +---+---+
    | 1 | o-------> | 2 | o-------> | x | x |
    +---+---+       +---+---+       +---+---+
    */

   third->data = 3;
   third->next = NULL; //set to NULL because it is currently the tail

   traverse(head);

   return 0;

}