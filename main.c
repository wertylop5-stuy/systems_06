#include<stdio.h>
#include"include/list.h"

int main() {
	struct node hello;
	hello.data = "fe";
	hello.next = NULL;
	print_list(&hello);
	
	struct node *hi = NULL;
	print_list(hi);
	
	hi = insert_front(hi, "water");
	print_list(hi);
	
	hi = insert_front(hi, "melon");
	print_list(hi);
	
	hi = free_list(hi);
	print_list(hi);
	
	hi = insert_front(hi, "apple");
	print_list(hi);
	
	hi = free_list(hi);
	print_list(hi);
	
	return 0;
}
