#ifndef LIST_H
#define LIST_H

struct node {
	//int data;
	char *data;
	struct node *next;
};

void print_list(struct node *);
//struct node* insert_front(struct node *, int);
struct node* insert_front(struct node *, char *);
struct node* free_list(struct node *);

#endif
