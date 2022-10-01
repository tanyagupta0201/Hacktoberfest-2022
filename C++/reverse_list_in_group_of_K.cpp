/*
    Authors Name : Vivek Kumar Patel
    Date Modified: 1 October, 2022
*/


#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

Node* reverse(Node* head, int k)
{
	if (!head || k == 1)
		return head;

	Node* dummy = new Node();
	dummy->data = -1;
	dummy->next = head;

	Node *prev = dummy, *curr = dummy, *next = dummy;

	int count = 0;
	while (curr) {
		curr = curr->next;
		count++;
	}

	while (next) {
		curr = prev->next;
		next = curr->next;
		int toLoop = count > k ? k : count - 1;
		for (int i = 1; i < toLoop; i++) {
			curr->next = next->next;
			next->next = prev->next;
			prev->next = next;
			next = curr->next;
		}
		prev = curr;
		count -= k;
	}
	return dummy->next;
}

void push(Node** head_ref, int new_data)
{
	Node* new_node = new Node();

	new_node->data = new_data;

	new_node->next = (*head_ref);

	(*head_ref) = new_node;
}

void printList(Node* node)
{
	while (node != NULL) {
		cout << node->data << " ";
		node = node->next;
	}
}

int main()
{
	Node* head = NULL;
	push(&head, 9);
	push(&head, 8);
	push(&head, 7);
	push(&head, 6);
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);

	cout << "Given linked list \n";
	printList(head);
	head = reverse(head, 3);

	cout << "\nReversed Linked list \n";
	printList(head);

	return (0);
}