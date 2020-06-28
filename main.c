#include <stdio.h>
#include "linked_list_test.h"
int main(int argc, char* argv[]){
	printf("Running Tests...\n");
	
	test_construct_ll_from_array();
	test_add_node();
	test_delete_node();
	test_search_ll();
	test_insert_node_after();
	test_add_node_at_beginning();
	test_delete_node_at_beginning();
	test_search_not_in_ll();
	test_delete_node_at_end(); 
	
	return 0;
}