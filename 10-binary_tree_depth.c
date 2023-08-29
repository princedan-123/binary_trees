#include "binary_trees.h"

/**
 * binary_tree_depth - evaluates the depth of a node
 *
 * @tree: a pointer to the node the node to be evaluated
 *
 * Return: the size of depth is returned
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *parent = tree->parent;
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (parent == NULL)
		return (0);
	while (parent != NULL)
	{
		parent = parent->parent;
		count++;
	}
	return (count);
}
