#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf node
 *
 * @node: a pointer to the node to be checked
 *
 * Return: 1 if it is a leaf node else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
