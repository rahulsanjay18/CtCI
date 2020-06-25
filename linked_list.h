
struct ll_node{
	int val;
	struct ll_node * next;
};

struct ll_node* add_node(struct ll_node* head, int value);
struct ll_node* delete_node(struct ll_node* head, int value);
struct ll_node* print_ll(struct ll_node* head);
int search_ll(struct ll_node* head, int value);
