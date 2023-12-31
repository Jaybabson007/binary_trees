#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>
#include <stdlib.h>

/**
 * struct binary_tree_s - The Binary tree node
 *
 * @n: The Integer stored in the node
 * @parent: A pointer to the parent node
 * @left: A pointer to the left child node
 * @right: A pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* Binary Search Tree */
typedef struct binary_tree_s bst_t;

/*AVL Tree */
typedef struct binary_tree_s avl_t;

/*Max Binary Heap */
typedef struct binary_tree_s heap_t;

/* binary_tree_print.c*/
void binary_tree_print(const binary_tree_t *);

/* 0-binary_tree_node.c prototype */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* 1-binary_tree_insert_left.c prototype*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* 2-binary_tree_insert_right.c prototype */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* 3-binary_tree_delete.c prototype */
void binary_tree_delete(binary_tree_t *tree);

/* 4-binary_tree_is_leaf.c prototype */
int binary_tree_is_leaf(const binary_tree_t *node);

/* 5-binary_tree_is_root.c prototype */
int binary_tree_is_root(const binary_tree_t *node);

/* 6-binary_tree_preorder.c prototype */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/*7-binary_tree_inorder.c prototype*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* 8-binary_tree_postorder.c prototype*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* 9-binary_tree_height.c prototype */
size_t binary_tree_height(const binary_tree_t *tree);

/* 10-binary_tree_depth.c prototype */
size_t binary_tree_depth(const binary_tree_t *tree);
void node_height_2(const binary_tree_t *tree, size_t n, size_t *height);

/* 11-binary_tree_size.c prototype */
size_t binary_tree_size(const binary_tree_t *tree);

/* 12-binary_tree_leaves.c prototype */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* 13-binary_tree_nodes.c prototype */
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);

/* 14-binary_tree_balance.c prototype */
int binary_tree_balance(const binary_tree_t *tree);
void node_height(const binary_tree_t *tree, int n, int *height);

/* 15-binary_tree_is_full.c prototype*/
int binary_tree_is_full(const binary_tree_t *tree);

/* 16-binary_tree_is_perfect.c prototype */
int binary_tree_is_perfect(const binary_tree_t *tree);
void tree_stats(const binary_tree_t *tree, size_t n,
	size_t *leaves, size_t *height);

/* 17-binary_tree_sibling.c prototype*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* 18-binary_tree_uncle.c prototype */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

#endif /* _BINARY_TREES_H_ */
