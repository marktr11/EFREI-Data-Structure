//
// Created by minhm on 11/10/2025.
//

#include "Slist.h"

#include <stdio.h>
#include <stdlib.h>
// Session 11-10-25
SNode *ds_slit_create_node(int data) { // 1
    SNode *pnode = (SNode *)malloc(sizeof(SNode));
    pnode->data = data;
    pnode->next = NULL;
    return pnode;
}

void ds_slist_init(SList* plist) { //2
    plist->head = NULL;
    //{*plist}.head = NULL;
}
SList ds_slist_create() { //3
    SList list;
    list.head = NULL;
    return list;
}
int ds_slist_is_empty(const SList *plist) {//4
    return plist->head == NULL;
}

// int ds_slist_is_empty(SList list) {
//     return list->head == NULL;
// }


int ds_slist_insert_head(SList *plist, int value) {
    SNode *new_node = ds_slit_create_node(value); //1
    new_node->next = plist->head;
    plist->head = new_node;
}

int ds_slist_insert_tail(SList *plist, int value) {
    SNode *new_node = ds_slit_create_node(value);
    // j;aurais du retourner
    if (ds_slist_is_empty(plist)) {
        plist->head = new_node;
    }
    else {
        SNode *cur = plist->head;
        while (cur->next != NULL) { // til there is no next then End so cur is tail
            cur = cur->next;
        }
        cur->next = new_node;
    }
    return 1;
}

void ds_slist_print(const SList *plist) {
    const SNode *cur = plist->head;
    printf("[");
    while (cur) {
        printf("%d, ", cur->data);
        if (cur->next != NULL) printf(" --> ");
        cur = cur->next;
    }
    printf("]\n");
}

void ds_slist_print_recursive(const SNode *pnode) {
    if (pnode) {
        printf("%d ",pnode->data);
        if (pnode->next != NULL) printf(" --> ");
        ds_slist_print_recursive(pnode->next);
    }
}
void ds_slist_print_v1(const SList *plist) {
    printf("[");
    ds_slist_print_recursive(plist->head);
    printf("]\n");
}