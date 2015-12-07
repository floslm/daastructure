#include <node.h>
#include <stdio.h>

void* myprint(void *elem) {
   printf("<%s>\n",(char*)elem);
}
int main(int argc, char**argv) {
LinkedList *l;
int i;
l=newEmptyList();
for (i=0; i< argc; i++) {
   printf("%d:<%s>\n",i,argv[i]);
   l=cons(argv[i],strlen(argv[i])+1,l);
}
mapAll(myprint,l);
}
