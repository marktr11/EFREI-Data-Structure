
#include <stdio.h>
#include <stdlib.h>
#include "Btree.h" // import Btree header
#include "Slist.h" // import Slist header

// - main() : Linked List
// - main() : Binary tree



// Linked List
// CHECK line 97-98 !!!! 17/10/25
int main(void) {
    // Session 11-10-25
    SNode n1;
    n1.data = 10;
    n1.next = NULL;
    printf("n1 : %d\n", n1.data);
    SNode *n2 = ds_slit_create_node(20); // value at address n2 point to = 20
                                              // create a Snode in heap which stores 20 as value and NULL as pointer
                                              // n2 point the newly created SNode
    // n2 is a pointer to SNode, so we declare it with *
    // ds_slit_create_node(20) returns a pointer to SNode
    // We do NOT put * before the function name (like we declared this function before) because the function
    // already returns a pointer. The * is only needed when declaring
    // a pointer variable or dereferencing (access) a pointer.
    // * is a part of type in declaration


    printf("n2 : %d\n", n2->data);



    SNode *pnode = &n1; // pnode is a pointer to a SNode (not initialized yet)
                  // *pnode access the value stored at the address pnode points to — i.e., the value of n1
    // pnode = &n1; // pnode now stores the address of node n1


    printf("Compare the address stored in pnode with the address of n1: %s\n",(&n1 == pnode) ? "Yes" : "No");


    // Assuming pnode is a pointer to a SNode
    // The arrow operator (->) is used to access members of the struct that pnode points to
    printf("Data of the node pointed to by pnode is: %d\n", pnode->data);

    SNode *pnode1 = (SNode *) malloc(sizeof(SNode)); // a pointer to a SNode (not initialized yet)
    pnode1->data = 100;
    pnode1->next = NULL;
    printf("Data of the node pointed to by pnode1 is: %d\n ", pnode1->data);

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

    //session 17/10
    ds_slist_print_recursive(&L);
    printf("\n insert 1000 at 0\n");
    ds_slist_insert_at(&L, 0, 1000);
    printf("\n insert 22 at 2\n");
    ds_slist_insert_at(&L, 2, 22);
    printf("\n insert 99 at 3\n");
    ds_slist_insert_at(&L, 3, 99);
    printf("\n insert 444 at 9\n");
    ds_slist_insert_at(&L, 9, 444);

    return 0;
}

// Binary Tree
int main_Btree(void) {
    // Binary Tree
    SNode n100;
    n100.data = 14;
    n100.next = NULL;

    SNode n101;
    n101.data = 10;
    n101.next = NULL;

    TNode T1;
    T1.data = 0;
    T1.left = &n101; // T1 point to the left which is the address of n101
    T1.right = &n100; // T1 point to the right which is address of n100
    //basically, the left of T1 is n1
    // CHECK DEBUG !!!!!! 17/10. how the left and right point work



    //session 17/10
    BTree T; ds_btree_init(&T);

    /*       8
           /   \
          3     10
         / \      \
        1   6      14
           / \     /
          4   7   13
    */
    TNode* n8 = ds_btree_create_node(8);
    TNode* n3 = ds_btree_create_node(3);
    TNode* n10 = ds_btree_create_node(10);
    TNode* n1 = ds_btree_create_node(1);
    TNode* n6 = ds_btree_create_node(6);
    TNode* n14 = ds_btree_create_node(14);
    TNode* n4 = ds_btree_create_node(4);
    TNode* n7 = ds_btree_create_node(7);
    TNode* n13 = ds_btree_create_node(13);

    T.root = n8; // T point to n8 as a root
    // Depth First Search
    ds_btree_attach_left(n8, n3);   ds_btree_attach_right(n8, n10);
    ds_btree_attach_left(n3, n1);   ds_btree_attach_right(n3, n6);
    ds_btree_attach_left(n6, n4);   ds_btree_attach_right(n6, n7);
    ds_btree_attach_right(n10, n14);
    ds_btree_attach_left(n14, n13);

    ds_btree_size(n8); /// ????

    //ds_btree_clear(&T);
    return 0;
}


