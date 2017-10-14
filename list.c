#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"include/list.h"

void print_list(struct node *head) {
	printf("-----BEGIN LIST-----\n");
	while (head) {
		printf("%s\n", head->data);
		head = head->next;
	}
	printf("-----END LIST-----\n\n");
}
/*
struct node* insert_front(struct node *head, int data) {
	struct node *new = (struct node *)malloc(sizeof(struct node));
	new->data = data;
	new->next = head;
	
	return new;
}
*/
struct node* insert_front(struct node *head, char *data) {
	struct node *new = (struct node *)malloc(sizeof(struct node));
	
	//this pointer initially doesn't point to anything, so
	//get memory for it too
	new->data = (char *)malloc(strlen(data)+1);
	strncpy(new->data, data, strlen(data)+1);
	
	new->next = head;
	
	return new;
}

struct node* free_list(struct node *head) {
	struct node *temp;
	while (head) {
		temp = head->next;
		free(head);
		head = temp;
	}
	
	return head;
}

