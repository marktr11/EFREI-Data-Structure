#ifndef LINKEDLIST_BTREE_H
#define LINKEDLIST_BTREE_H

//session 17/10
typedef struct TNode {int data;struct TNode *left;struct TNode *right;} TNode;
typedef struct BTree{struct TNode *root;}BTree;

/* init — O(1) */
void ds_btree_init(BTree* tree);
/* create node — O(1) */
TNode* ds_btree_create_node(int value);

/* attach left/right — O(1), no overwrite */
int ds_btree_attach_left(TNode* parent, TNode* child);
int ds_btree_attach_right(TNode* parent, TNode* child);
/* is_empty — O(1) */
int ds_btree_is_empty(const BTree* tree);

int ds_btree_size(TNode* node);

#endif //LINKEDLIST_BTREE_H