#include "binary_trees.h"

/**
 * binary_tree_insert_left - The function that inserts a node as the
 * left-child of another node.
 *
 * @parent: The pointer to the node to insert the left-child 
 * @value: The value to store in the new node.
 *
 * Return: The pointer to the created node, retuens NULL on failure or if parent
 * is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent != NULL)
	{
		new_node = malloc(sizeof(binary_tree_t));
		if (new_node != NULL)
		{
			new_node->left = parent->left;
			new_node->right = NULL;
			new_node->parent = parent;
			new_node->n = value;
			if (parent->left != NULL)
				parent->left->parent = new_node;
			parent->left = new_node;
		}
	}
	return (new_node);
}
