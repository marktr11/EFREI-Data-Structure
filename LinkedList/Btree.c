#include "Btree.h"
#include <stdio.h>
#include <stdlib.h>

//session 17/10
#include <stdlib.h>  /* malloc, free */

/* init — O(1) */
void ds_btree_init(BTree* tree) {
    tree->root = 0;
}

/* create node — O(1) */
TNode* ds_btree_create_node(int value) {
    TNode* n = (TNode*)malloc(sizeof * n);
    if (!n) return 0;
    n->data = value;
    n->left = 0;
    n->right = 0;
    return n;
}

/* attach left/right — O(1), no overwrite */
int ds_btree_attach_left(TNode* parent, TNode* child) {
    if (!parent || parent->left) return 0;
    parent->left = child;
    return 1;
}
int ds_btree_attach_right(TNode* parent, TNode* child) {
    if (!parent || parent->right) return 0;
    parent->right = child;
    return 1;
}

/* is_empty — O(1) */
int ds_btree_is_empty(const BTree* tree) {
    return tree->root == 0;
}

int ds_btree_size(TNode* node){
    if (!node) return 0;
    return 1 + ds_btree_size(node->left) + ds_btree_size(node->right);
}