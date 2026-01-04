//
// Created by minhm on 04/01/2026.
//

#include <stdio.h>
#include <stdlib.h>
#include "Linked_List.h"

int main(void) {
    printf("-------------------------PLAY WITH Data Structure----------------\n");
    Node n1;
    n1.value = 3;
    n1.next = NULL;
    printf("n1 value : %d\n", n1.value); //print nothing because there is no format specier for printf

    // Print the address stored in n1.next (pointer)
    // Use %p for pointers (cast to void* to be standard)
    // This shows where n1.next points to (NULL here)
    printf("n1 next points to : %p\n", (void*)n1.next);

    SinglyLinkedList l1;
    l1.head = &n1;
    printf("Adress of n1: %p\n", &n1);
    // Print the address stored in l1.head (pointer to n1)
    // Use %p to print full pointer address
    printf("l1.head points to : %p\n", (void*)l1.head);
    printf("l1.head points to : %p\n",  l1.head);

    // Optionally, print the value via the pointer stored in l1.head
    // Here we dereference the pointer (*l1.head) to access the Node it points to
    printf("Value at l1.head : %d\n", l1.head->value);


    return 0;



}
