#include <stdlib.h>
#include <string.h>



typedef struct _node Node;

typedef struct _linkedlist LinkedList;

struct _linkedlist* newEmptyList();
struct _node* newNode(void* elem, int size);
struct _linkedlist* cons(void* elem, int size, LinkedList *tail);
struct _linkedlist* last(struct _linkedlist *l);
void mapAll(void* (*map)(void *), LinkedList *l);

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
