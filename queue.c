#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node* next;
}node;

void enqueue(int data, node** queue);
int dequeue(node** queue);

int main() {
	node* queue = NULL;

	enqueue(3, &queue);
	enqueue(4, &queue);
	enqueue(5, &queue);
	printf("%d\n", dequeue(&queue));
	printf("%d\n", dequeue(&queue));
	printf("%d\n", dequeue(&queue));
}

void enqueue(int data, node** queue) {
	node* newNode = (node*)malloc(sizeof(node));
	if (newNode == NULL) {
		printf("memory allocation error\n");
		return;
	}
	newNode->data = data;
	newNode->next = NULL;

	if (*queue == NULL) {
		*queue = newNode;
		return;
	}

	node* current = *queue;
	while (current->next != NULL) {
		current = current->next;
	}
	
	current->next = newNode;
	return;
}

int dequeue(node** queue) {
	if (*queue == NULL) {
		printf("queue is already empty: ");
		return 0;
	}

	node* temp = *queue;
	int dequeue_data;

	dequeue_data = temp->data;

	*queue = (*queue)->next;
	free(temp);

	return dequeue_data;
}
