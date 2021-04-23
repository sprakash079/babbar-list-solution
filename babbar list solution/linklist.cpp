#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node(int x){
		data = x;
		next = NULL;
		
	}
};
// irr calll

void printlist(Node *head){
	
	while(head != NULL){
		cout << head -> data <<" ";
		head = head ->next;
	}
	cout << endl;
};
// rec call;

void printrlist(Node *head){
	if(head == NULL) return;
	

	cout << head -> data <<" ";
	printrlist(head -> next);
		
	
	
};
// seaching element  irr

int seaching(Node *head , int x){
	int pos =1;
	Node *curr = head;
	while(curr != NULL){
		if(curr -> data == x){
			return pos;
		}
		else{
			pos++;
			curr =curr->next;
		}
	}
};
// seaching element  rec

int seachring(Node *head ,int x){
	if(head == NULL) return -1;
	if(head -> data == x ) return 1;
	else{
		int res = seachring(head -> next , x);
		if(res == -1 )  return -1;
		else return(res+1); 
	}
	
	
	};
Node *insertatbegin(Node *head, int x){
	Node *temp =new Node(x);
	temp -> next = head;
	return temp;
	
	
};

 int main(){
 
 	Node *head = NULL;
 	head =insertatbegin(head, 80);
 	/*
 	Node *head = new Node(10);
 	Node *tem1 = new Node(20);
 	Node *tem2 = new Node(30);
 	head -> next = tem1;
 	tem1 -> next = tem2;
 	printlist(head);
 	printrlist(head);
 	cout << endl;
 	cout  << seaching(head,20);
 	cout << endl;
 	cout << seachring(head,40);*/
 	/*
	Node *head = new Node(10);
	head ->next = new Node(20);
	head -> next -> next = new Node(30);
	head = head-> next;
	printlist(head);*/
 	
 	return 0;
 }
