#include "binary_trees.h"

/**
 * binary_tree_delete - A function that deletes the entire binary tree.
 * @tree: A pointer to the root node of the tree to delete.
 *
 * If tree is NULL, it does nothing.
 *
 * Return: no return value
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
