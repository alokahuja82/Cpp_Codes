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

void deleteAtFront(node* &head, node* &tail) {
	if (head == NULL) {
		return;
	}
	else if (head->next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* temp = head;
		head = head->next;
		delete temp;
	}
}

void deleteAtEnd(node* &head, node* &tail) {
	if (head == NULL) {
		return;
	}
	else if (head->next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* t = head;
		while (t->next != tail) {
			t = t->next;
		}

		delete tail;
		tail = t;
		t->next = NULL;
	}
}

void DeleteAtMid(node* &head, node* &tail, int pos) {
	if (pos == 0) {
		deleteAtFront(head, tail);
	}
	else if (pos < lengthLL(head)) {
		node* temp = head;
		for (int i = 1 ; i < pos ; i++) {
			temp = temp->next;
		}

		node* n = temp->next;
		temp->next = n->next;
		delete n;
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


int main() {
    int n,q;
    cin>>n>>q;

    node* head, *tail;
    head = tail = NULL;

    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        InsertAtEnd(head,tail,k);
    }

    while(q-->0){
        int pos;
        cin>>pos;
        DeleteAtMid(head,tail,pos);
        PrintLL(head);
        cout<<endl;
    }
	return 0;
}
