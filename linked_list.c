#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>


struct ll_node* construct_ll_from_array(int arr[], unsigned int size){
	if(!size){
		return NULL;
	}
	struct ll_node* head = (struct ll_node*)malloc(sizeof(struct ll_node));
	head->val = arr[0];
	
	struct ll_node* cpy = head;
	
	for(int i = 1; i < size; i++){
		struct ll_node* node = (struct ll_node*)malloc(sizeof(struct ll_node));
		node->val = arr[i];
		cpy->next = node;
	}
	
	
	return NULL;
}

struct ll_node* add_node(struct ll_node* head, int value){
	struct ll_node* node = (struct ll_node*)malloc(sizeof(struct ll_node));
	node->val = value;
	
	if(head == NULL){
		return node;
	}
	
	struct ll_node* cpy = head;
	
	while(head->next != NULL){
		head = head->next;
	}
	
	head->next = node;
	
	return cpy;
}

struct ll_node* delete_node(struct ll_node* head, int value){
	struct ll_node* cpy = head;
	
	while(head != NULL && head->next->val != value){
		head = head->next;
	}
	
	struct ll_node* next_node = head->next;
	head->next = next_node->next;
	
	free(next_node);
	
	return cpy;
}
void print_ll(struct ll_node* head){
	printf("{");
	while(head->next != NULL){
		printf("%i, ", head->val);
		head = head->next;
	}
	
	printf("%i}\n", head->val);
	
}

struct ll_node* search_ll(struct ll_node* head, int value){
	
	while(head != NULL){
		if(head->val == value){
			return head;
		}
		head = head->next;
	}
	
	return NULL;
}

struct ll_node* insert_node_after(struct ll_node* head, int node_value, int target){
	struct ll_node* before_node = search_ll(head, target);
	struct ll_node* after_node = before_node->next;
	
	struct ll_node* node = (struct ll_node*)malloc(sizeof(struct ll_node));
	
	before_node->next = node;
	node->next = after_node;
	
	return head;
}