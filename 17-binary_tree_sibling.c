#include "binary_trees.h"

/**
 * binary_tree_sibling - searches for the sibling of a node
 *
 * @node: the node whose sibling is being searched for
 *
 * Return: a pointer to the sibling node is returned else null
 *
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	else if (node->parent->left == node)
		return (node->parent->right);
	else if (node->parent->right == node)
		return (node->parent->left);
	return (NULL);
}
