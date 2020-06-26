3include "linked_list.h"

int start_array[] = {1, 2, 3, 4};
int insert_val = 5;

int test_construct_ll_from_array(){
	
	struct ll_node* ret_val = construct_ll_from_array(start_array, 4);
	
	int i = 1;
	
	while(i <= 4){
		assert(ret_val->val == i);
		ret_val = ret_val->next;
		i++;
	}
	
	return 0;
}
int test_add_node(){
	
	struct ll_node* ret_val = construct_ll_from_array(start_array, 4);
	ret_val = add_node(ret_val, insert_val);
	
	int i = 1;
	
	while(i <= 5){
		assert(ret_val->val == i);
		ret_val = ret_val->next;
		i++;
	}
	
	return 0;
}
int test_delete_node(){
	
	int answer[] = {1, 2, 4};
	
	struct ll_node* ret_val = construct_ll_from_array(start_array, 4);
	ret_val = delete_node(ret_val, 3);
	
	int i = 1;
	
	while(i <= 3){
		assert(ret_val->val == answer[i - 1]);
		ret_val = ret_val->next;
		i++;
	}
	
	return 0;
}
int test_search_ll(){
	struct ll_node* ret_val = construct_ll_from_array(start_array, 4);
	
	int i = 1;
	
	ret_val = search_ll(ret_val, 3);
	
	assert(ret_val->val == 3);
	
	return 0;
}
int test_insert_node_after(){
	int answer[] = {1, 2, 3, 5, 4};
	
	struct ll_node* ret_val = construct_ll_from_array(start_array, 4);
	ret_val = insert_node_after(ret_val, insert_val, 3);
	
	int i = 1;
	
	while(i <= 5){
		assert(ret_val->val == answer[i - 1]);
		ret_val = ret_val->next;
		i++;
	}
	
	return 0;
}