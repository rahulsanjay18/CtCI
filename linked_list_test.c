#include "linked_list.h"
#include <assert.h>

int start_array[] = {1, 2, 3, 4};
int insert_val = 5;

void test_construct_ll_from_array(){
	
	struct ll_node* initial = construct_ll_from_array(start_array, 4);
	
	int i = 1;
	
	while(i <= 4){
		assert(initial->val == i);
		initial = initial->next;
		i++;
	}
	assert(initial == 0);
}
void test_add_node(){
	
	struct ll_node* initial = construct_ll_from_array(start_array, 4);
	initial = add_node(initial, insert_val);
	
	int i = 1;
	
	while(i <= 5){
		assert(initial->val == i);
		initial = initial->next;
		i++;
	}
	assert(initial == 0);
}
void test_delete_node(){
	
	int answer[] = {1, 2, 4};
	
	struct ll_node* initial = construct_ll_from_array(start_array, 4);
	initial = delete_node(initial, 3);
	
	int i = 1;
	
	while(i <= 3){
		assert(initial->val == answer[i - 1]);
		initial = initial->next;
		i++;
	}
	assert(initial == 0);
}
void test_search_ll(){
	struct ll_node* initial = construct_ll_from_array(start_array, 4);
	
	initial = search_ll(initial, 3);
	
	assert(initial->val == 3);
}
void test_insert_node_after(){
	int answer[] = {1, 2, 3, 5, 4};
	
	struct ll_node* initial = construct_ll_from_array(start_array, 4);
	initial = insert_node_after(initial, insert_val, 3);
	
	int i = 1;

	while(i <= 5){
		assert(initial->val == answer[i - 1]);
		initial = initial->next;
		i++;
	}
	assert(initial == 0);
}
void test_add_node_at_beginning(){
	struct ll_node* initial = add_node(0, 3);
	
	assert(initial->val == 3);
	assert(initial->next == 0);
}

void test_delete_node_at_beginning(){
	struct ll_node* initial = construct_ll_from_array(start_array, 4);
	initial = delete_node(initial, 1);
	
	int answer[] = {2, 3, 4};
	int i = 2;
	
	while(i <= 4){
		assert(initial->val == answer[i - 2]);
		initial = initial->next;
		i++;
	}
	assert(initial == 0);
}

void test_search_not_in_ll(){
	struct ll_node* initial = construct_ll_from_array(start_array, 4);
	
	initial = search_ll(initial, 5);
	
	assert(initial == 0);
}

void test_delete_node_at_end(){
	struct ll_node* initial = construct_ll_from_array(start_array, 4);
	delete_node(initial, 4);
	
	int answer[] = {1, 2, 3};
	int i = 1;
	
	while(i <= 3){
		assert(initial->val == answer[i - 1]);
		initial = initial->next;
		i++;
	}
	
	assert(initial == 0);
}
	