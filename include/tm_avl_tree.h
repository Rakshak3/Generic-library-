#ifndef __TM_AVL_TREE__H
#define __TM_AVL_TREE__H 123
#include<tm_common.h>
#include<tm_stack.h>
typedef struct __$_tm_avl_tree_node
{
void *ptr;
struct __$_tm_avl_tree_node *left;
struct __$_tm_avl_tree_node *right;
}AVLTreeNode;
typedef struct __$_tm_avl_tree
{
struct __$_tm_avl_tree_node *start;
int (*predicate) (void *,void *);
int size;
}AVLTree;
typedef struct __$_tm_avl_tree_in_order_iterator
{
struct __$_tm_avl_tree_node *node;
Stack *stack;
}AVLTreeInOrderIterator;

typedef struct __$_tm_avl_tree_pre_order_iterator
{
struct __$_tm_avl_tree_node *node;
Stack *stack;
}AVLTreePreOrderIterator;

//-----
typedef struct __$_tm_avl_tree_Post_order_iterator
{
struct __$_tm_avl_tree_node *node;
Stack *stack;
}AVLTreePostOrderIterator;
 
 

AVLTree * createAVLTree(bool *succes,int (*predicate) (void *,void *));
void destroyAVLTree(AVLTree *avlTree);
int getSizeOfAVLTree(AVLTree *avlTree);
void clearAVLTree(AVLTree *avlTree);
void insertIntoAVLTree(AVLTree *avlTree,void *ptr,bool *success);
void * removeFromAVLTree(AVLTree *avlTree,void *ptr,bool *success);
void * getFromAVLTree(AVLTree *avlTree,void *ptr,bool *success);

AVLTreeInOrderIterator getAVLTreeInOrderIterator(AVLTree *avlTree,bool *success);
bool hasNextInOrderElementInAVLTree(AVLTreeInOrderIterator *avlTreeInOrderItertor);
void * getNextInOrderElementFromAVLTree(AVLTreeInOrderIterator *avlTreeInOrderIterator,bool *success);
int getHieghtOfAVLTree(AVLTreeNode *root);
AVLTreePreOrderIterator getAVLTreePreOrderIterator(AVLTree *avlTree,bool *success);
bool hasNextPreOrderElementInAVLTree(AVLTreePreOrderIterator *avlTreePreOrderItertor);
void * getNextPreOrderElementFromAVLTree(AVLTreePreOrderIterator *avlTreePreOrderIterator,bool *success); 
AVLTreePostOrderIterator getAVLTreePostOrderIterator(AVLTree *avlTree,bool *success);
bool hasNextPostOrderElementInAVLTree(AVLTreePostOrderIterator *avlTreePostOrderItertor);
void * getNextPostOrderElementFromAVLTree(AVLTreePostOrderIterator *avlTreePostOrderIterator,bool *success);
void balanceAVLTree(AVLTree *avlTree,Stack *stack);

#endif


