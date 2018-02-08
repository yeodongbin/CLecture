#include <stdio.h>
#include <memory>

typedef struct node
{
	int value;
	struct node* nextNodePtr;
} Node;

void main()
{
	Node* head = NULL;
	head = (Node*)malloc(sizeof(Node));

	head->value = 1;
	head->nextNodePtr = (Node*)malloc(sizeof(Node));

	head->nextNodePtr->value = 2;
	head->nextNodePtr->nextNodePtr = NULL;

	return;
}

void printList(Node* head) 
{
	Node* current = head;

	while (current != NULL) {
		printf("%d\n", current->value);
		current = current->nextNodePtr;
	}
}

void push(Node* head, int value) 
{
	Node* current = head;
	while (current->nextNodePtr != NULL) 
	{
		current = current->nextNodePtr;
	}

	/* now we can add a new variable */
	current->nextNodePtr = malloc(sizeof(Node));
	current->nextNodePtr->value = value;
	current->nextNodePtr->nextNodePtr = NULL;
}

void push(Node** head, int value) {
	Node* newNode;
	newNode = malloc(sizeof(Node));

	newNode->value = value;
	newNode->nextNodePtr = *head;
	*head = newNode;
}

int pop(Node** head) {
	int retval = -1;
	Node* nextNode = NULL;

	if (*head == NULL) {
		return -1;
	}

	nextNode = (*head)->nextNodePtr;
	retval = (*head)->value;
	free(*head);
	*head = nextNode;

	return retval;
}

int removeLast(Node* head) {
	int retval = 0;
	/* if there is only one item in the list, remove it */
	if (head->nextNodePtr == NULL) {
		retval = head->value;
		free(head);
		return retval;
	}

	/* get to the last node in the list */
	Node* current = head;
	while (current->nextNodePtr->nextNodePtr != NULL) {
		current = current->nextNodePtr;
	}

	/* now current points to the last item of the list, 
	so let's remove current->next */
	retval = current->nextNodePtr->value;
	free(current->nextNodePtr);
	current->nextNodePtr = NULL;
	return retval;
}

int removeByIndex(Node** head, int n) {
	int i = 0;
	int retval = -1;
	Node* current = *head;
	Node* temp_node = NULL;

	if (n == 0) {
		return pop(head);
	}

	for (int i = 0; i < n - 1; i++) {
		if (current->nextNodePtr == NULL) {
			return -1;
		}
		current = current->nextNodePtr;
	}

	temp_node = current->nextNodePtr;
	retval = temp_node->value;
	current->nextNodePtr = temp_node->nextNodePtr;
	free(temp_node);

	return retval;
}