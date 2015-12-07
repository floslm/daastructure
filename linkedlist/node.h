#include <stdlib.h>

typedef struct _node Node;
typedef struct _linkedlist LinkedList;

struct _linkedlist {
     Node* head;
};
/*
 * Node of a liked list
 * void* for any type
 */
struct _node {   
    void* element; /* Head : Element of any type */
    LinkedList* next; /* Tail a list */
};
