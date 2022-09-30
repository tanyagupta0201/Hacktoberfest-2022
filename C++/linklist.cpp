/*
    Authors Name : Vivek Kumar Patel
    Date Modified: 1 October, 2022 
*/


#include<bits/stdc++.h>
using namespace std;

class node {
	public:
		int num;
		node* next;
		node(int val){
			num = val;
			next = NULL;
		}
};

void insertList(node* &head, int val){
	node* newnode = new node(val);
	if(head == NULL){
		head = newnode;
		return;
	}
	node* temp = head;
	while(temp->next){
		temp = temp->next;
	}
	temp->next = newnode;
	return;
}

int lengthList(node* head){
	int len = 0;
	while(head){
		len++;
		head = head->next;
	}
	return len;
}

node* reverseList(node* head){
	node* pre = NULL;
	node* cur = head;
	node* nxt;
	while(cur){
		nxt = cur->next;
		cur->next = pre;
		pre = cur;
		cur = nxt;
	}
	return pre;
}

void printList(node* head){
	while(head->next){
		cout << head->num << " -> ";
		head = head->next;
	}
	cout << head->num << endl;
}

int main(){
    int n; 	cin >> n;
	node* head = NULL;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	for(int i=0; i<n; i++){
		insertList(head, v[i]);
	}

	printList(head);

	node* revList = reverseList(head);
	printList(revList);

	return 0;
}