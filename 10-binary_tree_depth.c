 #include "binary_trees.h"

/**
 * binary_tree_depth - A function that measures the depth of a node in
 * a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: returns the depth of a node in a binary tree. If tree is NULL,
 * the function must return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *node = NULL;

	if (tree != NULL)
	{
		node = tree->parent;
		while (node != NULL)
		{
			depth++;
			node = node->parent;
		}
	}
	return (depth);
}
