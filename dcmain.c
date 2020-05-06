#include <stdio.h>
#include <stdlib.h>
#include "dclist.h"

int main(){
    dlist *l;
    l = create_dlist();
    insert_dlist(l, 0, 0);
    insert_end(l, 4);
    print_dlist(l);
    insert_dlist(l, 1, 1);
    insert_init(l, 8);
    print_dlist(l);
    remove_pos(l, 1);
    remove_end(l);
    insert_init(l, 6);
    remove_init(l);
    print_dlist(l);
    remove_dlist(l);
    l = NULL;
    return 0;
}