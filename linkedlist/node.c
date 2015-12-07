#include <node.h>
#include <string.h>

struct _linkedlist* newEmptyList() {
    struct _linkedlist* res=(struct _linkedlist *)malloc(sizeof(struct _linkedlist));
    res->head=0;
    return res;
}

struct _node* newNode(void* elem, int size) {
    struct _node* res=(struct _node *)malloc(sizeof(struct _node));
    res->element=malloc(size);
    memcpy(res->element, elem, size);
    res->next = newEmptyList();
    return res;    
}

struct _linkedlist* cons(void* elem, int size, LinkedList* tail) {
    struct _linkedlist* res=(struct _linkedlist *)malloc(sizeof(struct _linkedlist));
    struct _node* node=(struct _node *)malloc(sizeof(struct _node));
    /* Node from elem */
    node->element=malloc(size);
    memcpy(node->element, elem, size);
    node->next = tail;
    /* The head of the new list */
    res->head=node;
    return res;  
}

struct _linkedlist* last(LinkedList *l) {
    if (l->head == 0) return l;
    else return last(l->head->next);
}

void mapAll(void* (*map)(void *), LinkedList *l) {
        if (l->head !=0) {
            map(l->head->element);
            mapAll(map,l->head->next);
        }
}

