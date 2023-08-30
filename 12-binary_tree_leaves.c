#include "binary_trees.h"
/**
 * binary_tree_leaves - evaluates the number of leaves a node have
 *
 * @tree: a pointer to the root node
 *
 * Return: the number of leaves is returned, if no leaves 0 is returned
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leave = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		leave++;
	if (tree->right != NULL)
		leave++;
	return (leave);
}
