#include "binary_trees.h"

/**
 * binary_tree_sibling - A function that finds the sibling of a node.
 * @node: A pointer to the node to find the sibling.
 *
 * If the node is NULL or the parent is NULL, return NULL.
 * If the node has no sibling, return NULL.
 *
 * Return: Returns a pointer to the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *left = NULL;
	binary_tree_t *right = NULL;

	if ((node != NULL) && (node->parent != NULL))
	{
		left = node->parent->left;
		right = node->parent->right;
	}
	return (left == node ? right : left);
}
