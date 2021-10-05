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
void BubbleSortLL(node*head){
	for(int i =0; i<lengthLL(head)-1;i++){
    node*c = head;
    node* p =NULL;
    while(c!= NULL and c->next !=NULL){
      node* n = c->next;
      if(c->data > n->data){
        //swaping hog
        if(p == NULL){
          //head change
          c->next = n->next;
          n->next = c;
          p = head = n;
        }
        else{
          //head change nhi
          p->next = c->next;
          c->next = n->next;
          n->next = c;
          p =n;
        }
      }
      else{
        //swapping nhi hogi
        p=c;
        c=n;
      }
    }
  }
}


int main() {
  int n;
  cin>>n;

  node* head, *tail;
  head = tail = NULL;

  for(int i=0;i<n;i++){
    int k;
    cin>>k;
    InsertAtEnd(head,tail,k);
  }

  // PrintLL(head);

  BubbleSortLL(head);

  PrintLL(head);
	return 0;
}
