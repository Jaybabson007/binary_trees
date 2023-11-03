#include "binary_trees.h"

/**
 * binary_tree_is_full - A function that checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: returns 1 if tree is full. 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	/* on the condition that binary tree node is NULL then it is not a full binary tree */
	if (tree == NULL)
		return (0);

	/* on codition that binary tree node does have empty left and right sub-trees */
	/* (if leaf node) */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* on condition that both left and right are not NULL, and left & right subtrees are full */
	if ((tree->left) && (tree->right))
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);
		return (left && right);
	}

	return (0);
}
