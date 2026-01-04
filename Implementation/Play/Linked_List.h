//
// Created by minhm on 04/01/2026.
//

#ifndef LINKEDLIST_LINKED_LIST_H
#define LINKEDLIST_LINKED_LIST_H


typedef struct Node {
    int value;
    struct Node *next;
} Node ;


typedef  struct SinglyLinkedList {
    Node *head;
} SinglyLinkedList;



#endif //LINKEDLIST_LINKED_LIST_H