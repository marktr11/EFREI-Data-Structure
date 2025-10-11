
#include <stdio.h>
#include <stdlib.h>
#include "Slist.h" // import Slist header
int main(void) {
    SNode n1;
    n1.data = 10;
    n1.next = NULL;
    printf("n1 : %d\n", n1.data);
    SNode *n2 = ds_slit_create_node(20); // value at address n2 point to
                                              // n2 is a pointer
    // * is a part of type in declaration
    printf("n2 : %d\n", n2->data);



    SNode *pnode; // The value at the address that pnode points to is null for now
    pnode = &n1; // pnode now stores the address of node n1
                 // *pnode is the value stored at the address pnode points to — i.e., the value of n1

    printf("Compare the address stored in pnode with the address of n1: %s\n",(&n1 == pnode) ? "Yes" : "No");

    // Session 11-10-25
    printf("data du node pointe par pnode est %d\n ", pnode->data);

    SNode *pnode1 = (SNode *) malloc(sizeof(SNode));
    pnode1->data = 100;
    pnode1->next = NULL;
    printf("data du node pointe par pnode1 ess %d\n ", pnode1->data);

    printf("----------------------------------JOUER AVEC LES LISTES-----------");

    SList l;
    ds_slist_init(&l);
    SList l2=ds_slist_create();

    printf("-------------Avant remplissage---------------------");

    SList L;
    ds_slist_init(&L);
    SList L2=ds_slist_create();

    ds_slist_insert_tail(&L, 5);
    ds_slist_insert_head(&L, 10);
    ds_slist_insert_head(&L, 20);
    ds_slist_insert_head(&L, 30);
    ds_slist_insert_tail(&L, 100);
    ds_slist_insert_tail(&L, 200);
    ds_slist_insert_tail(&L, 300);
    ds_slist_insert_head(&L, 1);

    printf("---------AFFICHAGE---------------------------");
    ds_slist_print(&L);
    printf("---------AFFICHAGE RECURSIVE---------------------------");
    //ds_slist_print_recursive(L.head);
    ds_slist_print_v1(&L);
    return 0;





}


