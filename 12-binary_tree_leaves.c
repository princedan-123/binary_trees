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
	if (tree->left == NULL && tree->right == NULL)
		leave++;
	leave += binary_tree_leaves(tree->left);
	leave += binary_tree_leaves(tree->right);
	return (leave);
}
