#include "binary_trees.h"

/**
 * binary_tree_size - A function that measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Return: The size of a binary tree. If the tree is NULL,
 * the function must return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	/*To get the size of left subtree recursively */
	left = binary_tree_size(tree->left);

	/*To get the size of right subtree recursively */
	right = binary_tree_size(tree->right);

	/* To Calculate the size of the tree as follows */
	return (left + 1 + right);
}
