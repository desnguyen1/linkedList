#include <iostream>

using std::cout;
using std::cin;

struct Node{
    int data;
    Node* next;
};

class linkedList{
    private:
    Node *head, *tail;

    public:
    //constructor: empty linked list
    linkedList(){
        head = NULL;
        tail = NULL;
    }
    //prints message of where to insert/delete node
    static int whereMsg(){
        int loc;
        do{
            cout<<"\nLocation Options: ";
            cout<<"\n   (1) Beginning";
            cout<<"\n   (2) End";
            cout<<"\n   (3) After a specific node";
            cout<<"\nLocation: ";
            cin>>loc;
            cout<<"\nloc = "<<loc;
        }while(loc != 1 || loc != 2 || loc != 3);

        return loc;
    }

    //print linked list
    void traverse(){
        Node* n = head;

        while(n != NULL){
            cout<<"\n+---+---+";
            cout<<"\n| "<<n->data<<" | o |";
            cout<<"\n+---+-|-+";
            cout<<"\n   ___|";
            cout<<"\n  |    ";
            cout<<"\n  v    ";
            if(n->next == NULL){
                cout<<"\nNULL"<<std::endl;
            }
            n = n->next;
        }
    }

    //adds node
    void addNode(int n){
        int choice=1;

        Node* temp = new Node;
        temp->data = n;

        choice = whereMsg();
        cout<<"\n"<<choice;

        //insert node at beginning
        if(choice == 1){
            //if node is empty, then node is the head
            if(head == NULL){
                head = temp;
                head->next = NULL;
                tail = temp;
                tail->next = NULL;
            }
        }

    }

};

void menu(){
    cout<<" \n---------->>>Menu<<<---------- ";
    cout<<"\n|    (P) Print Linked List     |";
    cout<<"\n|    (A) Add a Node            |";      
    cout<<"\n|    (Q) Quit Program          |";

}

int main(){
    char choice;
    int value;

    linkedList list;

    do{
        menu();
        cout<<"\nChoice: ";
        cin>>choice;
        choice = toupper(choice);

        cout<<"\n"<<choice;

        switch (choice)
        {
        //traversing the list
        case 'P':
            cout<<"\nTraversing through list";
            list.traverse();
            break;

        //adding a node
        case 'A':
            cout<<"\nAdding a node";
            list.addNode(3);
            break;
        
        default:
            cout<<"\ndefault";
            break;
        }

    }while(choice != 'Q');

    return 0;
}