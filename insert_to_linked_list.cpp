
struct node {
    int data;
    node *next;
}

struct linkedlist { 
    node *head;
    node *tail;
}


void insert_node_to_sorted_list(linkedlist *list, int value);

case 1: empty list

void insert_node_to_sorted_list(linkedlist *list, int value) {
    node *new_node = new node;
    new_node->data = value;
    
    node *current = list->head; // current node we're at
    
    // empty case
    if (list->head == NULL) {
        list->head = new_node;
        new_node->next = null;
        list->tail = new_node
    
        return;
    }
    
    // inserting before the head
    if (list->head->data > value) {
        list->head = new_node;
        new_node->next = current;
    
        return;
    }
    
    // inserting after the tail 
    else if (list->tail->data < value) {
        list->tail->next = new_node; 
        list->tail = new_node; 
    }
        
    else {
        node *prev = current;
        current = current->next;
        
        while (current->next != NULL && current->data < value) {
            current = current->next;
            prev = prev->next;
            
        }
        
        prev->next = new_node;
        new_node->next = current; 
    }
    
}
