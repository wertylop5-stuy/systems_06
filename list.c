#include<stdio.h>
#include<stdlib.h>
#include"include/list.h"

void print_list(struct node *head) {
	while (head) {
		printf("%d\n", (head++)->data);
	}
}

struct node* insert_front(struct node *head, int data) {
	struct node *new = (struct node *)malloc(sizeof(struct node));
	new->data = data;
	new->next = head;
	
	return new;
}

struct node* free_list(struct node *head) {
	
}
