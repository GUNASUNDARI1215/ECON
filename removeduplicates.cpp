// C Program for to remove the consequtive duplicates in a singly linked list

#include<iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};
struct Node* head;

void Print(Node* p) {
	if(p==NULL) return;
	printf("%d ",p->data);
	Print(p->next);
}

 void push(int data) {
    Node* temp = new Node;
    temp->data=data;
    temp->next = head;
    head = temp;
}
     
Node *removeDuplicate(Node* head) {
	Node *temp = head;
	while(temp->next != NULL && temp != NULL) {
		if(temp->data == temp->next->data) {
			temp -> next = temp ->next ->next;
		}
		else {
			temp = temp->next;
		}
	}
	return head;
}



int main() {
	head=NULL;
	push(9);
    push(9);
    push(9);
 	push(45);
    push(36);
    push(27);
    push(27);
    push(27);
    push(18);
    push(18);
    push(18);
    push(9);
    
    cout<<"Linked list is : " ;
	Print(head);
	
//After removing duplicates
	head = removeDuplicate(head);
	cout<<"\nThe new Linked List after removing the consecutive duplicates is : " ;
	Print(head);
	
	return 0;
}
