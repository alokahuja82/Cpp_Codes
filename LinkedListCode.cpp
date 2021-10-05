#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int d){
        data = d;
        next = NULL;
    }
};

int lengthLL(node* head){
    int count =0;
    while(head != NULL){
        count++;
        head = head->next; //updation

    }
    return count;
}

void InsertAtFront(node* &head, node* &tail,int d){
    //creation of node
    node* n = new node(d);
    if(head == NULL){
        head = tail = n;
    }
    else{
        n->next = tail;
        head = n;
    }
}

void InsertAtEnd(node* &head, node* &tail, int d){
    //creation of node
    node* n = new node(d);
    if(head == NULL){
        head = tail = n;
    }
    else{
        tail->next = n;
        tail=n;
    }

}
void PrintLL(node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next; //updation

    }
}


int main(){
    node* head, *tail;
    head = tail = NULL;


    InsertAtEnd(head,tail,1);
    InsertAtEnd(head,tail,2);
    InsertAtEnd(head,tail,3);
    InsertAtEnd(head,tail,4);
    InsertAtEnd(head,tail,5);

    PrintLL(head);

	return 0;
}
