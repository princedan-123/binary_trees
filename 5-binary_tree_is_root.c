#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is the root node
 *
 * @node: the node to be checked
 *
 * Return: 1 if it is the root else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->parent == NULL)
		return (1);
	return (0);
}
