#include <stdio.h>
#include <stdlib.h>

int main() {
	typedef struct node {
		int number;
		struct node* next;
	}node;

	node* list = NULL;

	for (int i = 0; i < 5; i++){
		node* n = malloc(sizeof(node));
		if (n == NULL) {
			printf("Memory can't allocated.");
			return 1;
		}
		n->number = i;
		n->next = list;

		list = n;
	}
	node* ptr = list;
	for (int i = 0; i < 20; i++)
	{
		if (ptr != NULL) {
			printf("%d ", ptr->number);
			ptr = ptr->next;
		}
	}

	return 0;
}
