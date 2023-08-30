#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node on a tree
 *
 * @node: the node whose uncle is to be found
 *
 * Return: a pointer to the uncle or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	else if (node->parent->parent == NULL)
		return (NULL);
	else if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	return (NULL);
}
