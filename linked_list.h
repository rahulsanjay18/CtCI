
struct ll_node{
	int val;
	struct ll_node * next;
};
struct ll_node* construct_ll_from_array(int arr[], unsigned int size);
struct ll_node* add_node(struct ll_node* head, int value);
struct ll_node* delete_node(struct ll_node* head, int value);
void print_ll(struct ll_node* head);
struct ll_node* search_ll(struct ll_node* head, int value);
struct ll_node* insert_node_after(struct ll_node* head, int node_value, int target); 