#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the node with at least a child
 *
 * @tree: a pointer to the root node
 *
 * Return: the number of node with at least a child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		node++;
	node += binary_tree_nodes(tree->left);
	node += binary_tree_nodes(tree->right);
	return (node);
}
