#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* next;
}node;

void push(int data, node** head);
int pop(node * *head);

int main() {
	node* head = NULL;

	push(5, &head);
	push(6, &head);
	push(7, &head);
	printf("%d\n", pop(&head));
	printf("%d\n", pop(&head));
	printf("%d\n", pop(&head));
}

void push(int data, node** head) {
	node* newNode = (node*)malloc(sizeof(node));
	if (newNode == NULL) {
		printf("Memory allocation error\n");
		return;
	}
	newNode->data = data;
	newNode->next = *head;

	*head = newNode;
	return;
}

int pop(node** head) {
	if (*head == NULL) {
		printf("Your list is already empty");
		return 0;
	}
	int pop_data;
	node* temp = *head;
	pop_data = temp->data;

	*head = (*head)->next;
	
	free(temp);
	return pop_data;
}
